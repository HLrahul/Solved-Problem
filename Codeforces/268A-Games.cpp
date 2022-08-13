#include<bits/stdc++.h>
using namespace std;
 
int main(){
	vector<int> v1; vector<int> v2;
	int result = 0;
	int n; cin>>n;
	
	for(int i = 0; i < n; i++){
		int a, b; cin>>a>>b;
		v1.push_back(a);
		v2.push_back(b);
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j< n; j++){
			if(v1[i] == v2[j]) ++result;
		}
	}
	cout<<result;
	
	return 0;
}