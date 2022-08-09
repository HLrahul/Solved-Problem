#include<bits/stdc++.h>
using namespace std;

int main(){
	int num, loop, lastdigit;
	cin>>num>>loop;
	
	for(int i = 0; i < loop; i++){
	    lastdigit = num%10;
	    if(lastdigit == 0) num = num/10;
	    else num = num-1;
	}
	cout<<num;
	
	return 0;
}