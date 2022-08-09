#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, a = 0, d = 0;
	cin>>n;
	char str[n];
	
	for(int i = 0; i < n; i++){
	    cin>>str[i];
	    if(str[i] == 'A') a++;
	    if(str[i] == 'D') d++;
	}
	
	if(a>d) cout<<"Anton";
	else if(a<d) cout<<"Danik";
	else cout<<"Friendship";
	
	return 0;
}