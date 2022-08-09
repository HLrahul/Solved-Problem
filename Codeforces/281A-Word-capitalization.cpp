#include<bits/stdc++.h>
using namespace std;

int main(){
	string input;
	cin>>input;
	int n = input.length();
	
	char string[n];
	strcpy(string, input.c_str());
	
	if(islower(string[0])) string[0] = toupper(string[0]);
	for(int i = 0; i < n; i++) cout<<string[i];
	
	return 0;
}