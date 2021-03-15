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
	int t, kase = 0;
	scanf("%d", &t);
	while(t -- ){
		vector<string> vi[15];
		int mx = 0;
		int rel;
		string str;
		for(int i = 0; i < 10; i ++ ){
			cin >> str >> rel;
			mx = max(mx, rel);
			vi[rel].emplace_back(str);
		}
		printf("Case #%d:\n", ++kase);
		for(string &element : vi[mx])
			cout << element << "\n";
	}
    return 0;
}
