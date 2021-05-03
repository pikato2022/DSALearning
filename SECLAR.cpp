#include<bits/stdc++.h>

using namespace std;
int solve() {
	int a[3];
	int mx = -2;
	for(int i = 0; i < 3; i ++) {
		scanf("%d|\n", a+i);
		
	}
	//sort(a,a+3);
	if(a[2]<=a[0]) swap(a[2], a[0]);
	if(a[1]< a[0]) swap(a[1],a[0]);
	if(a[1] > a[2]) swap(a[1],a[2]);
	return a[1];
}
int main() {
	printf("%d", solve());
	return 0;
	
}
