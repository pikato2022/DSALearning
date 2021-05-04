#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	for(int i = 0; i <n; i++) {
		if(i%2==0) 
			for(int j = 1; j <= 5; j++) 
				printf("%d ",5*i+j);
		else 
			for(int j = 5; j >=1; j--) 
				printf("%d ", 5*i+j);
		cout<<endl;
	}
	return 0;
}
