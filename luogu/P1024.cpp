// P1024 - 一元三次方程求解
// 6 Mar 2021 - zqsml
#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

double a, b, c, d;
double eps = 1e-6;

int main(){
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	for(double i = -100; i <= 100; i += 0.01){
		if(fabs(a * i * i * i + b * i * i + c * i + d) < eps)
			printf("%.2lf ", i);
	}
	puts("");
	return 0;
}
