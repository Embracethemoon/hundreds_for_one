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

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int n, foo;
	scanf("%d", &n);
	int cnt = 0;
	double res = 0;
	for(int i = 0; i < n; i ++ ){
		scanf("%d", &foo);
		if(foo != -1){
			res += foo;
			cnt ++ ;
		}
	}
	res /= cnt;
	printf("%lf\n", res);
	return 0;
}
