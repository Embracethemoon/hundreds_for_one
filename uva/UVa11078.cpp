#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

void solve(){
	int n;
	scanf("%d", &n);
	int foo, cur, res;
	cur = -2e5;
	res = -3e5;
	while(n -- ){
		scanf("%d", &foo);
		res = max(res, cur - foo);
		cur = max(cur, foo);
	}
	printf("%d\n", res);
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
	int t;
	scanf("%d", &t);
	while(t -- ){
		solve();
	}
    return 0;
}
