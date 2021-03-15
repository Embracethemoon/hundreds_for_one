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
const int N = 26;
int times[N];
bool st[N];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int m;
	string q, result;
	while(cin >> m){
		if(m == -1) break;
		cin >> q >> result;
		if(result == "right"){
			times[q[0] - 'A'] += m;
			st[q[0] - 'A'] = true;
		}
		else if(result == "wrong")
			times[q[0] - 'A'] += 20;
	}
	int cnt = 0, total = 0;
	for(int i = 0; i < 26; i ++ )
		if(st[i]){
			cnt ++ ;
			total += times[i];
		}
	printf("%d %d\n", cnt, total);
    return 0;
}
