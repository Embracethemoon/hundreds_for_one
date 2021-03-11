#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
int a[110];

void solve(){
	memset(a, 0, sizeof a);
	int n;
	int cnt = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	while(a[cnt] == a[0]) cnt ++ ;
	printf("%d\n", n - cnt);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		solve();
	}
	return 0;
}
