#include<bits/stdc++.h>
using namespace std;

int main(){
	int cost, money, bananas, total = 0;
	cin>>cost>>money>>bananas;
	
	int i = 1;
	while(i<=bananas){
	    total = total+(i*cost);
	    i++;
	}
	
	int money_borrowed = total-money;
	if(money_borrowed<0) money_borrowed=0;
	cout<<money_borrowed;
	
	return 0;
}