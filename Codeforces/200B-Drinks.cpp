#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
	double n, p = 0.0;
	double result = 0.0;
	cin>>n;
	
	for(int i = 0; i < n; ++i){
		int a;
		cin>>a;
		p += a;
	}
	
	n *= 100;
	result = ((p/n)*100);
	cout<<fixed<<setprecision(12)<<result;
	
	return 0;
}