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
const double eps = 1e-6;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int t;
	scanf("%d", &t);
	int total = 0;
	for(int i = 0; i < t; i ++ ){
		double len, wid, dep, wei;
		scanf("%lf %lf %lf %lf", &len, &wid, &dep, &wei);
		bool flag = true;
		if(((len - 56 > eps || wid - 45 > eps || dep - 25 > eps) && ( len + wid + dep - 125 > eps)) || wei - 7 > eps)
			flag = false;
		if(flag){
			total ++ ;
			puts("1");
		}
		else puts("0");
	}
	printf("%d\n", total);
    return 0;
}
