#include<bits/stdc++.h>

using namespace std;
int solve(int n) {
	int tmp = n;
	int ans = 0;
	while(tmp>0) {
		ans= ans*10 + tmp%10;
		tmp/=10;
	}
	return ans;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d",&n);
		printf("%d\n", solve(n));
	}
	return 0;
}
