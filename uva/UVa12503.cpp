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
int mov[N];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int t;
	scanf("%d", &t);
	while(t -- ){
		int n, cur;
		cur = 0;
		scanf("%d", &n);
		string str1, str2;
		int ind;
		for(int i = 1; i <= n; i ++ ){
			cin >> str1;
			if(str1 == "LEFT") mov[i] = -1;
			else if(str1 == "RIGHT") mov[i] = 1;
			else if(str1 == "SAME"){
				cin >> str2 >> ind;
				mov[i] = mov[ind];
			}
			cur += mov[i];
		}
		printf("%d\n", cur);
	}
    return 0;
}
