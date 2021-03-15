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
int banks[20 + 5];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int b, n;
	while(~scanf("%d %d", &b, &n)){
		if(b == 0 && n == 0) break;
		memset(banks, 0, sizeof(banks));
		for(int i = 1; i <= b; i ++ ) scanf("%d", &banks[i]);
		for(int i = 0; i < n; i ++ ){
			int d, c, v;
			scanf("%d %d %d", &d, &c, &v);
			banks[d] -= v;
			banks[c] += v;
		}
		bool flag = true;
		for(int i = 1; i <= b; i ++ )
			if(banks[i] < 0){
				flag = false;
				break;
			}
		if(flag) puts("S");
		else puts("N");
	}
    return 0;
}
