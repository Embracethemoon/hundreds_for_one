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
	int l, x, p, cnt;
	string op;
	scanf("%d %d", &l, &x);
	int cur = 0;
	cnt = 0;
	for(int i = 0; i < x; i ++ ){
		cin >> op >> p;
		if(op == "enter"){
			if(cur + p <= l)
				cur += p;
			else
				cnt ++ ;
		}
		else if(op == "leave")
			cur -= p;
	}
	printf("%d\n", cnt);
    return 0;
}
