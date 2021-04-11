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
const int N = 1e4 + 5;
int solid[N];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int a, c;
	while(~scanf("%d %d", &a, &c)){
		if(a == 0 && c == 0) break;
		for(int i = 0; i < c; i ++ ) scanf("%d", &solid[i]);
		int count = 0;
		for(int i = 0; i < c - 1; i ++ ){
			if(solid[i] < solid[i + 1])
				count += solid[i + 1] - solid[i];
		}
		count += a - solid[c - 1];
		printf("%d\n", count);
	}
    return 0;
}
