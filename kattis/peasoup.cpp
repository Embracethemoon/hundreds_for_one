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
	int n, k;
	scanf("%d", &n);
	string ans = "Anywhere is fine I guess";
	while(n -- ){
		scanf("%d", &k);
		cin.ignore();
		bool pea, pan;
		pea = false;
		pan = false;
		string name, food;
		getline(cin, name);
		for(int i = 0; i < k; i ++ ){
			getline(cin, food);
			if(food == "pea soup") pea = true;
			else if(food == "pancakes") pan = true;
		}
		if(pea && pan){
			ans = name;
			break;
		}
	}
	cout << ans << "\n";
    return 0;
}
