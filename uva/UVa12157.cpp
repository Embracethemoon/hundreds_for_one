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

int mile(int x){
	int rate = x / 30 + 1;
	return rate * 10;
}

int juice(int x)
{
	int rate = x / 60 + 1;
	return rate * 15;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int t, kase = 0;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int mi, ju;
		mi = 0; ju = 0;
		for(int i = 0; i < n; i ++ ){
			int foo;
			scanf("%d", &foo);
			mi += mile(foo);
			ju += juice(foo);
		}
		printf("Case %d: ", ++kase);
		if(mi < ju) printf("Mile %d\n", mi);
		else if(mi > ju) printf("Juice %d\n", ju);
		else printf("Mile Juice %d\n", mi);
	}
    return 0;
}
