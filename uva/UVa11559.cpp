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
const int INF = 500050;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int n, b, h, w, mn;
	while(~scanf("%d %d %d %d", &n, &b, &h, &w)){
		mn = INF;
		for(int i = 0; i < h; i ++ ){
			int p;
			scanf("%d", &p);
			for(int j = 0; j < w; j ++ ){
				int a;
				scanf("%d", &a);
				if(a >= n && n * p <= b)
					mn = min(mn, p);
			}
		}
		if(mn == INF)
			puts("stay home");
		else
			printf("%d\n", mn * n);
	}
    return 0;
}
