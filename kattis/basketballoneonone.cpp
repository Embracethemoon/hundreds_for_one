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
	string record;
	cin >> record;
	// 2 * i, 2 * i + 1
	int a = 0, b = 0;
	for(int i = 0; i < record.size() / 2; i ++ ){
		if(record[2 * i] == 'A')
			a += record[2 * i + 1] - '1' + 1;
		else
			b += record[2 * i + 1] - '1' + 1;
		if(max(a, b) >=  11 && abs(a - b) >= 2){
			if(a > b) puts("A");
			else puts("B");
			break;
		}
	}
    return 0;
}
