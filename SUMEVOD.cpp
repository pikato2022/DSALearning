#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
//vector<ll> sm;
//ll sum_odd(int n) {
//	sm.push_back(1);
//	for(int i = 1; i < n; i++) {
//		sm[i] = sm[i-1]+2*i+1;
//	}
//	return sm[n-1];
//}
int main() {
	ll n;
	scanf("%lld", &n);
	ll ans = n*n;
	printf("%lld %lld\n", ans, ans+n);
	return 0;
}
