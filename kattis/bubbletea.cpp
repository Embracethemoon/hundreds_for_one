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
const int INF = 0x3f3f3f3f;
const int N = 1050;
int tea[N], topping[N];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int n, m, k, x;
	scanf("%d", &n);
	for(int i = 0; i < n; i ++ ) scanf("%d", &tea[i]);
	scanf("%d", &m);
	for(int i = 0; i < m; i ++ ) scanf("%d", &topping[i]);
	int price = INF;
	for(int i = 0; i < n; i ++ ){
		scanf("%d", &k);
		for(int j = 0; j < k; j ++ ){
			int foo;
			scanf("%d", &foo);
			price = min(price, tea[i] + topping[foo - 1]);
		}
	}
	scanf("%d", &x);
	int res = x / price;
	if(res > 0) res -- ;
	printf("%d\n", res);
    return 0;
}
