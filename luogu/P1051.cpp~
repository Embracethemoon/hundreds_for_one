#include <cstdio>
#include <iostream>

using namespace std;

const int N = 110;

int n;
int mx, sum;
string mxName;

int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i ++ ){
		int temp = 0;

		string name;
		int score1, score2;
		string isStudent, isWest;
		int papers;
		cin >> name >> score1 >> score2 >> isStudent >> isWest >> papers;
		if(score1 > 80 && papers >= 1) temp += 8000;
		if(score1 > 85 && score2 > 80) temp += 4000;
		if(score1 > 90) temp += 2000;
		if(score1 > 85 && isWest == "Y") temp += 1000;
		if(score2 > 80 && isStudent == "Y") temp += 850;

		sum += temp;
		if(temp > mx){
			mx = temp;
			mxName = name;
		}
	}

	cout << mxName << endl;
	cout << mx << endl << sum << endl;

	return 0;
}
