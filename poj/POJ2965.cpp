// POJ2965
// zqsml on 3 Mar 2021
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int INF = 0x3f3f3f3f;

int ans = INF;
char board[5][5];
int grid[4][4];
int st[21][2];
int res[21][2];
int h;

void push(int a, int b){
	h ++ ;
	st[h][0] = a;
	st[h][1] = b;
}

void pop(){
	h -- ;
}

bool check(){
	for(int i = 0; i < 4; i ++ )
		for(int j = 0; j < 4; j ++ )
			if(grid[i][j] != 1)
				return false;
	return true;
}

void flip(int row, int col){
	for(int i = 0; i < 4; i ++ ){
		if(i == row) continue;
		grid[i][col] = !grid[i][col];
	}

	for(int i = 0; i < 4; i ++ ){
		grid[row][i] = !grid[row][i];
	}
}

void dfs(int row, int col, int count, int head){
	if(check()){
		ans = min(ans, count);
		memcpy(res, st, sizeof res);
		return ;
	}
	if(count > ans) return;

	int x = row * 4 + col;

	if(x == 16) return;

	x ++ ;

	int nx = x / 4;
	int ny = x % 4;

	flip(row, col);
	push(row, col);
	dfs(nx, ny, count + 1, head + 1);
	
	pop();
	flip(row, col);
	dfs(nx, ny, count, head);
}

int main(){
	for(int i = 0; i < 4; i ++ ) scanf("%s", board[i]);

	memset(grid, 0, sizeof grid);
	h = -1;

	for(int i = 0; i < 4; i ++ )
		for(int j = 0; j < 4; j ++ )
			if(board[i][j] == '-') grid[i][j] = 1;

	dfs(0, 0, 0, -1);
	
	printf("%d\n", ans);

	for(int i = 0; i < ans; i ++ )
		printf("%d %d\n", res[i][0] + 1, res[i][1] + 1);
}
