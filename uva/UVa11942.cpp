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
int lum[15];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int t;
	scanf("%d", &t);
	puts("Lumberjacks:");
	while(t -- ){
		for(int i = 0; i < 10; i ++ ) scanf("%d", &lum[i]);
		bool flag = true;
		for(int i = 1; i < 9; i ++ ){
			if((lum[i - 1] < lum[i] && lum[i] > lum[i + 1]) || (lum[i - 1] > lum[i] && lum[i] < lum[i + 1])){
				flag = false;
				break;
			}
		}
		if(flag) puts("Ordered");
		else puts("Unordered");
	}
	return 0;
}
