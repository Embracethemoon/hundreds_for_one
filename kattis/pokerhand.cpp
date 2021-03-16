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
const int N = 128;
int table[N];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	string str;
	for(int i = 0; i < 5; i ++ ){
		cin >> str;
		table[str[0] - '0'] ++ ;
	}
	printf("%d\n", *max_element(table, table + N));
    return 0;
}
