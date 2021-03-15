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
const int N = 85;
char str[N];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int t;
	scanf("%d", &t);
	while(t--){
		int res = 0, cur = 0;
		scanf("%s", str);
		for(int i = 0; i < strlen(str); i ++ ){
			if(str[i] == 'O') cur ++ ;
			else cur = 0;
			res += cur;
		}
		printf("%d\n", res);
	}
    return 0;
}
