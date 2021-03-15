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

int rev(int x){
	int res = 0;
	while(x){
		res *= 10;
		res += x % 10;
		x /= 10;
	}
	return res;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int a, b;
	scanf("%d %d", &a, &b);
	a = rev(a);
	b = rev(b);
	printf("%d\n", max(a, b));
    return 0;
}
