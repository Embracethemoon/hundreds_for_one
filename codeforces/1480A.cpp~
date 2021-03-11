#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		string ans = s;
		for(int i = 0; i < s.size(); i++){
			if(i % 2 == 0){	// alice
				if(s[i] == 'a') ans[i] = 'b';
				else ans[i] = 'a';
			}
			else if(i % 2 != 0){	// Bob
				if(s[i] == 'z') ans[i] = 'y';
				else ans[i] = 'z';
			}
		}
		cout << ans << endl;
	}
	return 0;
}
