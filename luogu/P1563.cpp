#include <cstdio>
#include <iostream>

const int N = 100010;

struct Toy{
	int direct;
	char duty[15];
}toys[N];

int n, m;

int main(){
	scanf("%d %d", &n, &m);

	for(int i = 0; i < n; i ++ ) scanf("%d %s", &toys[i].direct, toys[i].duty);

	int pos = 0;
	int direction = 0;
	for(int i = 0; i < m; i ++ ){
		int a, s;
		scanf("%d %d", &a, &s);
		direction = (a + toys[pos].direct)% 2;
		if(direction == 1) s = -s;
		pos = (pos - s + n) % n;
	}
	printf("%s\n", toys[pos].duty);

	return 0;
}
