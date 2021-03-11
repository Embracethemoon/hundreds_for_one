#include <cmath>
#include <iostream>

using namespace std;

typedef long long ll;

int main(){
	int kase;
	scanf("%d", &kase);
	while(kase -- ){
		ll n;
		scanf("%lld", &n);
		ll ans = (ll)(sqrt(n * 2));
		printf("%lld\n", ans);
	}
	return 0;
}
