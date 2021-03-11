#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

const int N = 1010;

int n, m;
int d[N][N];
int st[N][N];

bool bfs(int x){
	memset(st, 0, sizeof st);
	queue<pair<int, int> > q;

	q.push(make_pair(0, 0));
	st[0][0] = 1;

	while(!q.empty()){
		int row = q.front().first;
		int col = q.front().second;
		q.pop();

		for(int i = -1; i <= 1; i ++ ){
			for(int j = -1; j <= 1; j ++ ){
				if(i == 0 || j == 0){
					int nx = row + i;
					int ny = col + j;
					if(nx >= 0 && nx < n && ny >= 0 && ny < m && st[nx][ny] == 0 && d[nx][ny] <= x){
						st[nx][ny] = 1;
						q.push(make_pair(nx,ny));
						if(nx == n - 1) return true;
					}
				}
			}
		}
	}
	return false;
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i ++ )
		for(int j = 0; j < m; j ++ ){
			scanf("%d", &d[i][j]);
		}

	int l, r, ans;
	l = 0, r = 1000;
	ans = 0;

	while(l <= r){
		int mid = (l + r) >> 1;
		if(bfs(mid)){
			ans = mid;
			r = mid - 1;
		} else l = mid + 1;
	}
	printf("%d\n", ans);
	return 0;
}
