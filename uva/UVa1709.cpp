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
//const int N = 1e6 + 10;
//double temp[N];
int p, a, b, c, d, n;

inline double price(int k){
	return p * (sin(a * k + b) + cos(c * k + d) + 2);
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	while(~scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n)){
		double ans = 0;
		double mx;
		mx = price(1);
		for(int i = 2; i <= n; ++i){
			if(price(i) > mx){
				mx = price(i);
				continue;
			}
			ans = max(ans, mx - price(i));
		}
		printf("%.6lf\n", ans);
	}
    return 0;
}
