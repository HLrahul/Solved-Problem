#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, h, w = 0;
	cin>>n>>h;
	
	int a[n];
	for(int i = 0; i < n; i++) cin>>a[i];
	
	for(int i = 0; i < n; i++){
		if(a[i] > h) w += 2;
		else w += 1;
	}
	cout<<w;

	return 0;
}