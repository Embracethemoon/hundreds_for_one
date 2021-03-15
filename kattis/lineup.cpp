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
	vector<string> vi(n);
	for(int i = 0; i < n; i ++ )
		cin >> vi[i];
	bool inc = false;
	bool dec = false;
	bool nei = false;
	for(int i = 1; i < n; i ++ ){
		if(vi[i] > vi[i - 1]) inc = true;
		else if(vi[i] < vi[i - 1]) dec = true;
		if(inc && dec){
			nei = true;
			break;
		}
	}
	if(nei) puts("NEITHER");
	else if(inc) puts("INCREASING");
	else puts("DECREASING");
    return 0;
}
