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
const int N = 10;
int votes[N];
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i ++ ){
		int n, sum, foo, mx, winner;
		int count = 0;
		scanf("%d", &n);
		sum = 0;
		for(int j = 0; j < n; j ++ ){
			scanf("%d", &votes[j]);
			sum += votes[j];
		}
		mx = *max_element(votes, votes + n);
		for(int j = 0; j < n; j ++ )
			if(mx == votes[j]){
				winner = j;
				count ++ ;
			}
		if(count > 1)
			puts("no winner");
		else if(count == 1){
			if(mx * 2 > sum) printf("majority winner ");
			else printf("minority winner ");
			printf("%d\n", winner + 1);
		}
	}
    return 0;
}
