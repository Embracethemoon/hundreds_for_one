#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 2e5 + 10;

struct person{
	int s, w, ind;
}p[N];

bool cmp(const person &a, const person &b){
	if(a.s != b.s)
		return a.s > b.s;
	return a.ind < b.ind;
}

person winner[N], loser[N], tmp[N];

int n, r, q;

int main(){
	scanf("%d %d %d", &n, &r, &q);
	for(int i = 0; i < 2 * n; i ++ ) p[i].ind = i + 1;
	for(int i = 0; i < 2 * n; i ++ ) scanf("%d", &p[i].s);
	for(int i = 0; i < 2 * n; i ++ ) scanf("%d", &p[i].w);
	sort(p, p + 2 * n, cmp);

	while(r -- ){
		for(int i = 0; i < n; i ++ ){
			if(p[i * 2].w < p[i * 2 + 1].w){
				p[i * 2 + 1].s ++ ;
				loser[i] = p[i * 2];
				winner[i] = p[i * 2 + 1];
			}
			else{
				p[i * 2].s ++ ;
				winner[i] = p[i * 2];
				loser[i] = p[i * 2 + 1];
			}
		}
		// p1 for winner, p2 for loser
		int p1 = 0, p2 = 0;
		int k = 0;
		while(p1 < n && p2 < n){
			if(winner[p1].s > loser[p2].s || (winner[p1].s == loser[p2].s && winner[p1].ind < loser[p2].ind)){
				tmp[k ++ ] = winner[p1 ++ ];
			}
			else tmp[k ++ ] = loser[p2 ++ ];
		}
		while(p1 < n) tmp[k ++ ] = winner[p1 ++ ];
		while(p2 < n) tmp[k ++ ] = loser[p2 ++ ];
		for(int i = 0; i < 2 * n; i ++ ) p[i] = tmp[i];
	}

	printf("%d\n", p[q - 1].ind);
	return 0;
}
