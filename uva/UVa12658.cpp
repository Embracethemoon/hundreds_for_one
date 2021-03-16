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
char board[8][45];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int n;
	scanf("%d", &n);
	int ans = 0;
	for(int i = 0; i < 5; i ++ ) scanf("%s", board[i]);
	for(int i = 0; i < n; i ++ ){
		int x = 2;
		int y = 4 * i + 2;
		if(board[x][y] == '.'){
			ans *= 10;
			ans += 1;
		}
		else if(board[x][y] == '*' && board[x + 1][y] == '.'){
			ans *= 10;
			ans += 2;
		}
		else if(board[x][y] == '*' && board[x + 1][y] == '*'){
			ans *= 10;
			ans += 3;
		}
	}
	printf("%d\n", ans);
    return 0;
}
