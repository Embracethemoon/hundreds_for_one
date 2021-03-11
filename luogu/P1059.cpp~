#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 110;

int n;
int a[N];
int ans[N];

void quick_sort(int q[], int l, int r){
	if(l >= r) return;

	int i = l - 1, j = r + 1, x = q[l + r >> 1];
	while(i < j){
		do i ++; while(q[i] < x);
		do j --; while(q[j] > x);
		if(i < j) swap(q[i], q[j]);
	}
	quick_sort(q, l, j), quick_sort(q, j + 1, r);
}

int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i ++ ) scanf("%d", &a[i]);

	quick_sort(a, 0, n - 1);

	int count = 0;
	for(int i = 1; i < n; i ++ ){
		if(a[i - 1] != a[i]){
			ans[count] = a[i - 1];
			count ++ ;
		}
	}
	ans[count] = a[n - 1];
	count ++ ;
	printf("%d\n", count);
	for(int i = 0; i < count; i ++ ) printf("%d ", ans[i]);
	puts("");

	return 0;
}
