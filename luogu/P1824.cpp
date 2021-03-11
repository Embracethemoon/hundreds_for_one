#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10;

int n, c;
int a[N];

bool check(int x){
	int last = 0, count = 1;
	for(int i = 1; i < n; i ++ ){
		if(a[i] - a[last] >= x){
			last = i;
			count ++ ;
		}
	}
	if(count >= c) return true;
	return false;
}

int main(){
	scanf("%d %d", &n, &c);
	for(int i = 0; i < n; i ++ ) scanf("%d", &a[i]);
	sort(a, a + n);

	int l, r, mid, ans;
	l = 0, r = a[n - 1] - a[0];
	mid = r;
	ans = 0;

	while(l <= r){
		mid = l + r >> 1;
		if(check(mid)){
			ans = max(ans, mid);
			l = mid + 1;
		} else r = mid - 1;
	}
	printf("%d\n", ans);

	return 0;
}
