#include <cstdio>
#include <iostream>

using namespace std;

int v, t;

int main(){
	while(~scanf("%d %d", &v, &t)){
		printf("%d\n", v * t * 2);
	}
	return 0;
}
