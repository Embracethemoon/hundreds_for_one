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
const int N = 55;
int temp[N];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i ++ ) scanf("%d", &temp[i]);
	int day, ans, cur;
	ans = 100;
	for(int i = 1; i < n - 1; i ++ ){
		cur = max(temp[i - 1], temp[i + 1]);
		if(cur < ans){
			ans = cur;
			day = i;
		}
	}
	printf("%d %d\n", day, ans);
    return 0;
}
