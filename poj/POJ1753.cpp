// POJ1753 - Flip Game
// zqsml on 3 Mar 2021
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int INF = 0x3f3f3f3f;

int ans = INF;
char board[5][5];
int grid[4][4];
int dx[] = {1 , -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool check(){
	for(int i = 0; i < 4; i ++ )
		for(int j = 0; j < 4; j ++ )
			if(grid[i][j] != grid[0][0])
				return false;
	return true;
}

void flip(int row, int col){
	grid[row][col] = !grid[row][col];
	for(int i = 0; i < 4; i ++ ){
		int nx = row + dx[i];
		int ny = col + dy[i];
		if(nx >= 0 && nx < 4 && ny >= 0 && ny < 4)
			grid[nx][ny] = !grid[nx][ny];
	}
}

void dfs(int row, int col, int count){
	if(check()){
		ans = min(ans, count);
		return ;
	}
	if(count > ans) return;

	int x = row * 4 + col;

	if(x == 16) return;

	x ++ ;

	int nx = x / 4;
	int ny = x % 4;

	flip(row, col);
	dfs(nx, ny, count + 1);

	flip(row, col);
	dfs(nx, ny, count);
}

int main(){
	for(int i = 0; i < 4; i ++ ) scanf("%s", board[i]);

	for(int i = 0; i < 4; i ++ )
		for(int j = 0; j < 4; j ++ )
			if(board[i][j] == 'b') grid[i][j] = 1;

	dfs(0, 0, 0);

	if(ans == INF) puts("Impossible");
	else printf("%d\n", ans);
	
	return 0;
}
