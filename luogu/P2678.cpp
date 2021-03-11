// P2678 (NOIP2015 提高组) - 跳石头
// 二分答案
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 50010;

int len, n, m;
int rock[N];

bool check(int num){
	int ind, cur;
	ind = 0, cur = 0;
	int count = 0;
	while(ind < n + 1){
		ind ++ ;
		if(rock[ind] - rock[cur] < num) count ++ ;
		else cur = ind;
	}
	if(count > m) return false;
	return true;
}

int main(){
	scanf("%d %d %d", &len, &n, &m);
	for(int i = 1; i < n + 1; i ++ ) scanf("%d", &rock[i]);
	rock[n + 1] = len;

	int ans = 0;
	int l = 0, r = len;
	while(l <= r){
		int mid = l + r >> 1;
		if(check(mid)){
			ans = mid;
			l = mid + 1;
		}
		else r = mid - 1;
	}
	printf("%d\n", ans);
	return 0;
}
