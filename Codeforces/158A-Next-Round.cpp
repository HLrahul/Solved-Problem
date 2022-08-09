#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, next=0;
	cin>>n>>k;
	int scores[n];
	for(int i = 0; i < n; i++) cin>>scores[i];
	int min = scores[k-1];
	for(int j = 0; j < n; j++){
    		if(scores[j]>=min && scores[j]>0) next += 1;
	}
	cout<<next;
	return 0;
}