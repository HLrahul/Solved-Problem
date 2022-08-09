#include<bits/stdc++.h>
using namespace std;

int result = 0;

int solve(){
	string op; cin>>op;
	if(op == "++X") ++result;
	else if(op == "X++") result++;
	else if(op == "--X") --result;
	else result--;

	return result;
}

int main(){
	int n, answer;
	cin>>n;
	for(int i = 0; i < n; i++){ answer=solve(); cout<<answer; }
	return 0;
}