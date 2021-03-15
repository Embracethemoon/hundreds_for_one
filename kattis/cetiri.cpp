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
int arr[8];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	for(int i = 0; i < 3; i ++ ) scanf("%d", &arr[i]);
	int mn = 100;
	int res = 0;
	sort(arr, arr + 3);
	for(int i = 0; i < 2; i ++ )
		mn = min(mn, arr[i + 1] - arr[i]);
	if(arr[1] - arr[0] > mn) res = arr[0] + mn;
	else if(arr[2] - arr[1] > mn) res = arr[1] + mn;
	else if(arr[2] + mn < 100) res = arr[2] + mn;
	else res = arr[0] - mn;
	printf("%d\n", res);
    return 0;
}
