#include<bits/stdc++.h>
using namespace std;

int result=0;

int solve(){
	int a,b,c;
	cin>>a>>b>>c;
	int sum = a+b+c;
	if(sum >= 2) result += 1;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++) solve();
	cout<<result;
	return 0;
}