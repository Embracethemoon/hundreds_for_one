#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int foo;
	scanf("%d", &foo);
	if(foo == 0) {}
	else if(foo == -1) printf("-x^%d", n);
	else if(foo < 0) printf("%dx^%d", foo, n);
	else if(foo == 1) printf("x^%d", n);
	else printf("%dx^%d", foo, n);
	for(int i = 1; i < n - 1; i ++ ){
		scanf("%d", &foo);
		if(foo == 0) continue;
		else if(foo == -1) printf("-x^%d", n - i);
		else if(foo < 0) printf("%dx^%d", foo, n - i);
		else if(foo == 1) printf("+x^%d", n - i);
		else printf("+%dx^%d", foo, n - i);
	}
	if(n > 1){
	scanf("%d", &foo);
	if(foo == 0) {}
	else if(foo == -1) printf("-x");
	else if(foo < 0) printf("%dx", foo);
	else if(foo == 1) printf("+x");
	else printf("+%dx", foo);
	}
	scanf("%d", &foo);
	if(foo == 0) {}
	else if(foo < 0) printf("%d", foo);
	else printf("+%d", foo);
	puts("");
	return 0;
}
