#include <bits/stdc++.h>

using namespace std;

int main(){
	string str, res;
	string problem;
	while(getline(cin, str)){
		res = "";
		for(int i = 0; i < str.size() - 4; i ++ ){
			if(!isdigit(str[i] && !isdigit(str[i + 2]) || !isdigit(str[i])))
				res += str[i + 1];
			if(isdigit(str[i]) && isdigit(str[i + 1]) && isdigit(str[i + 2]) && isdigit(str[i + 3])){
				problem = "[problem:POJ-" + str.substr(i, 4) + "]";
				res += problem;
				problem = "";
				i += 4;
			}
		}
		res += str.substr(str.size() - 4);
		cout << res << endl;
	}
	return 0;
}
