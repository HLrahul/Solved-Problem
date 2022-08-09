#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int inbus = 0, highest = 0;
	for(int i = 0; i < n; i++){
		int a, b;
		cin>>a>>b;
		inbus -= a;
		inbus += b;
		highest = max(inbus, highest);
	}
	cout<<highest;
	
	return 0;
}