#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	string total = "";
	string temp;
	while(cin >> temp) total += temp;
	
	int w = 0, l = 0;
	for(int i = 0; i < total.size(); i ++ ){
		if(total[i] == 'E') break;

		if(total[i] == 'W') w ++ ;
		else l ++ ;

		if(abs(w - l) >= 2 && max(w, l) >= 11){
			printf("%d:%d\n", w, l);
			w = 0;
			l = 0;
		}
	}


		printf("%d:%d\n", w, l);
		w = 0;
		l = 0;


	puts("");

	for(int i = 0; i < total.size(); i ++ ){
		if(total[i] == 'E') break;

		if(total[i] == 'W') w ++ ;
		else l ++ ;

		if(abs(w - l) >= 2 && max(w, l) >= 21){
			printf("%d:%d\n", w, l);
			w = 0;
			l = 0;
		}
	}

		printf("%d:%d\n", w, l);
		w = 0;
		l = 0;

	return 0;
}
