#include<bits/stdc++.h>
using namespace std;

int c[5], e = 3;

int main(){
	for(int i = 0; i < 4; i++) cin>>c[i];

	sort( c, c+4);
	for(int i = 0; i < 3; i++){
		if( c[i] != c[i+1]) --e;
	}
	cout<<e;
	
	return 0;
}