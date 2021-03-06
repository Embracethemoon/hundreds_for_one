#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct volunteer{
	int k;
	int s;
};

int n, m;

bool cmp(volunteer a, volunteer b){
	if(a.s != b.s)
		return a.s > b.s;
	return a.k < b.k;
}

int main(){
	scanf("%d %d", &n, &m);
	vector<volunteer> vi;

	for(int i = 0; i < n; i ++ ){
		int k, s;
		volunteer temp;
		scanf("%d %d", &k, &s);
		temp.k = k;
		temp.s = s;
		vi.push_back(temp);
	}
	sort(vi.begin(), vi.end(), cmp);

	int st = m + m / 2;
	int ans = vi[st - 1].s;
	
	int i = 0;
	while(vi[i].s >= ans) i ++ ;

	printf("%d %d\n", ans, i);
	for(int j = 0; j < i; j ++ ) printf("%d %d\n", vi[j].k, vi[j].s);

	return 0;
}
