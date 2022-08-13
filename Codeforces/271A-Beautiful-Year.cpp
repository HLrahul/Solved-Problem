#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	
	while(true){
	    n += 1;
	    
	    int d = n / 1000;
	    int c = n / 100 % 10;
	    int b = n / 10 % 10;
	    int a = n % 10;
	    
	    if(a != b && a != c && a != d && b != c && b != d && c != d) break;
	}
	cout<<n<<endl;
	
	return 0;
}