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
const int N = 1e6 + 5;
int cal(int num){
	int cnt = 0;
	while(num){
		num /= 10;
		cnt ++ ;
	}
	return cnt;
}
char str[N];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	while(~scanf("%s", str)){
		if(memcmp(str, "END", 3) == 0) break;
		int count = 1;
		int len = strlen(str);
		if(len == 1 && str[0] == '1') count -- ;
		while(len != cal(len)){
			count++;
			len = cal(len);
		}
		count ++ ;
		printf("%d\n", count);
	}
    return 0;
}
