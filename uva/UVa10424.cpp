#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

inline int calculate(string &str){
	int sum = 0;
	for(int i = 0; i < str.size(); ++ i){
		if(str[i] >= 'a' && str[i] <= 'z')
			sum += str[i] - 'a' + 1;
		else if(str[i] >= 'A' && str[i] <= 'Z')
			sum += str[i] - 'A' + 1;
	}
	int res = 0;
	while(sum){
		res += sum % 10;
		sum /= 10;
	}
	if(res < 10) return res;
	while(res){
		sum += res % 10;
		res /= 10;
	}
	if(sum < 10) return sum;
	while(sum){
		res += sum % 10;
		sum /= 10;
	}
	return res;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	string str1, str2;
	while(getline(cin, str1)){
		getline(cin, str2);
		int num1 = calculate(str1);
		int num2 = calculate(str2);
		double res = 1.0 * min(num1, num2) / max(num1, num2) * 100;
		printf("%.2lf %\n", res);
	}
    return 0;
}
