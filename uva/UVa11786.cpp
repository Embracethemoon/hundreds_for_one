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
const int N = 2e4 + 5;
int water[N];
char str[N];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int n;
	scanf("%d", &n);
	while(n -- ){
		scanf("%s", str);
		int height = 10000;
		int res = 0;
		memset(water, -1, sizeof water);
		for(int i = 0; i < strlen(str); i ++ ){
			if(str[i] == '/'){
				if(water[height] != -1){
					//printf("update: %d %d\n", i, i - water[height]);
					res += i - water[height];
				}
				height ++ ;
			}
			else if(str[i] == '\\'){
				height -- ;
				water[height] = i;
			}
		}
		printf("%d\n", res);
	}
    return 0;
}
