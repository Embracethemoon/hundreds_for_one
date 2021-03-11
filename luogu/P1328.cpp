#include <cstdio>
#include <iostream>

using namespace std;

const int N = 210;

int n;
int res[2];
int na, nb;
int a[N], b[N];

int main(){
	scanf("%d %d %d", &n, &na, &nb);
	for(int i = 0; i < na; i ++ ) scanf("%d", &a[i]);
	for(int i = 0; i < nb; i ++ ) scanf("%d", &b[i]);

	for(int i = 0; i < n; i ++ ){
		int x = a[i % na];
		int y = b[i % nb];
		int cur = 0;

		if(x == y) continue;

		if(x > y) {swap(x, y); cur = 1 - cur;}
		
		if(x == 0){
			if(y == 1) res[1 - cur] ++ ;
			else if(y == 2) res[cur] ++ ;
			else if(y == 3) res[cur] ++ ;
			else res[1 - cur] ++ ;
		}
		else if(x == 1){
			if(y == 2) res[1 - cur] ++ ;
			else if(y == 3) res[cur] ++ ;
			else res[1 - cur] ++ ;
		}
		else if(x == 2){
			if(y == 3) res[1 - cur] ++ ;
			else res[cur] ++ ;
		}
		else if(x == 3) res[cur] ++ ;
	}
	printf("%d %d\n", res[0], res[1]);
	return 0;
}
