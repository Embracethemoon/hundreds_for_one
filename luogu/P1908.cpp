// P1908 - 逆序对
// 6 Mar 2021 - zqsml
// 记得开long long, 因为数据挺大, 不开long long会爆int, 导致输出结果有问题
#include <cstdio>
#include <iostream>
#include <algorithm>

const int N = 1e6 + 10;

typedef long long ll;

int n;
ll ans;
int a[N], tmp[N];

void merge_sort(int q[], int l, int r){
	if(l >= r) return;
	int mid = l + r >> 1;
	merge_sort(q, l, mid);
	merge_sort(q, mid + 1, r);

	int k = 0, i = l, j = mid + 1;
	while(i <= mid && j <= r){
		if(q[i] <= q[j]) tmp[k ++ ] = q[i ++ ];
		else{
			ans += (ll) mid - i + 1;
			tmp[k ++ ] = q[j ++ ];
		}
	}
	while(i <= mid) tmp[k ++ ] = q[i ++ ];
	while(j <= r) tmp[k ++ ] = q[j ++ ];
	
	for(int i = l, j = 0; i <= r; i ++ , j ++ ) q[i] = tmp[j];
}

int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i ++ ) scanf("%d", &a[i]);

	merge_sort(a, 0, n - 1);

	printf("%lld\n", ans);

	return 0;
}
