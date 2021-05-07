#include<bits/stdc++.h>

using namespace std;

int main() {
	vector<int> a;
	while(true) {
		int n;
		scanf("%d", &n);
		if(n == 42) break;
		a.push_back(n);
	}
	for(int i = 0; i < a.size(); i++) {
		printf("%d\n", a[i]);
	}
	return 0;
}
