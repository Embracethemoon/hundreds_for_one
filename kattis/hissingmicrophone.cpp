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
	string str;
	cin >> str;
	for(int i = 0; i < str.size() - 1; i ++ ){
		if(str[i] == 's' && str[i + 1] == 's'){
			puts("hiss");
			return 0;
		}
	}
	puts("no hiss");
    return 0;
}
