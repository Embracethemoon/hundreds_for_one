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

inline int sum(int x){
	int res = 0;
	while(x){
		res += x % 10;
		x /= 10;
	}
	return res;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int n;
	while(~scanf("%d", &n)){
		if(n == 0) return 0;
		while(n >= 10){
			n = sum(n);
		}
		printf("%d\n", n);
	}
    return 0;
}
