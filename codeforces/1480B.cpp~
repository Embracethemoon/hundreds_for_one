#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using ll = long long;
const int maxn = 1e5 + 10;


int main(){
	IOS
	int t;
	cin >> t;
	while(t--){
		ll A, B, sum = 0;
		int n;
		cin >> A >> B >> n;
		ll t = 0, mx = 0;
		vector<ll> a(n), b(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) cin >> b[i];
		for(int i = 0; i < n; i++)
		{
			t += (b[i]+A-1)/A*a[i];
			mx=max(mx,a[i]);   
		}
		t-=mx;
		if(B >= t) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
