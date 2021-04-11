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
	int n;
	scanf("%d", &n);
	int res;
	if(n < 4)
		res = 1;
	else
		res = n - 2;
	printf("%d\n", res);
    return 0;
}
