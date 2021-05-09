#include<bits/stdc++.h>

using namespace std;

int main() {
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	int ans = -1;
	if((a+b) > c && (c+b) > a && (a+c) > b) {
		ans = 3;
		if(a==b || b==c || c==a) {
			ans=2;
			if(a==b && b==c) {
				ans=1;
			}
		}
	}
	printf("%d", ans);
	return 0;
}
