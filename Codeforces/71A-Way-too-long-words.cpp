#include<bits/stdc++.h>
using namespace std;

void solve(){
	string word;
	cin>>word;
	int len = word.length();
	int num = 0;
	for(int j=0; j<len; j++) num += 1;

	if(num>10){
    		printf("%c%d%c",word[0],num-2,word[len-1]);
    		cout<<endl;
	}    
	else cout<<word<<endl;
}

int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++) solve();
	
	return 0;
}