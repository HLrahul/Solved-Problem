#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	
	int a[n],b[n];
	for(int i = 1; i<=n; i++){
		cin>>a[i];
		int e = a[i];
		b[e] = i;
	}
	
	for(int i = 1; i<=n; i++){
		cout<<b[i]<<" ";
	}
	
	return 0;
}