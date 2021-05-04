#include<bits/stdc++.h>

using namespace std;

int main() { 
	int n;
	scanf("%d", &n);
	int spaces = n;
	int stars = 0;
	while(n--){
		spaces--;
		stars++;
		for(int i = 0; i < spaces; i++) {
			cout<<" ";
		}
		for(int i = 0; i < stars; i++) {
			cout<<"*";
		}
		cout<<endl;
//		n--;
	}
	return 0;
}
