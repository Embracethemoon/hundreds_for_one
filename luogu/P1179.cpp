#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	int l, r;
	scanf("%d %d", &l, &r);
	int cnt = 0;
	for(int i = l; i <= r; i ++ ){
		string tmp = to_string(i);
		for(int i = 0; i < tmp.size(); i ++ ) if(tmp[i] == '2') cnt ++ ;
	}
	printf("%d\n", cnt);
	return 0;
}
