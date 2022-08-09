#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, pair = 0;
	cin>>n;	
	
	char string[n];
	for(int i = 0; i < n; i++) cin>>string[i];

	for(int j = 0; j < n; j++){
    		if(string[j] == string[j+1]) ++pair;
	}
	cout<<pair;
	
	return 0;
}