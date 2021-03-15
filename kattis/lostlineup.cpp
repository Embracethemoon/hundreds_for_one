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
const int N = 105;
int d[N];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int n, foo;
	scanf("%d", &n);
	for(int i = 2; i <= n; i ++ ){
		scanf("%d", &foo);
		d[foo + 1] = i;
	}
	printf("1");
	for(int i = 1; i < n; i ++ ) printf(" %d", d[i]);
	printf("\n");
    return 0;
}
