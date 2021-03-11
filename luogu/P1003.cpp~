#include <cstdio>
#include <iostream>

using namespace std;

const int N = 1e4 + 5;

int a[N], b[N], g[N], k[N];
int x, y;

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i ++ )
		scanf("%d %d %d %d", &a[i], &b[i], &g[i], &k[i]);
	scanf("%d %d", &x, &y);

	int ans = -1;

	for(int i = 0; i < n; i ++ ){
		int dx1 = a[i];
		int dy1 = b[i];
		int dx2 = dx1 + g[i];
		int dy2 = dy1 + k[i];
		if(dx1 <= x && dx2 >= x && dy1 <= y && dy2 >= y)
			ans = i + 1;
	}
	printf("%d\n", ans);
}
