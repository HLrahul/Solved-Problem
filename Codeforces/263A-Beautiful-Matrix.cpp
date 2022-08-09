#include<bits/stdc++.h>
using namespace std;

int main(){
	int matrix[5][5], ith, jth, z = 0;
	for(int i = 0; i < 5;i++){
	    for(int j = 0; j < 5; j++){
        	cin>>matrix[i][j];
        	if(matrix[i][j]==1){
       			ith = i;
            		jth = j;
        	}
    	    }
	}
	if(ith == 0 || ith == 4) z += 2;
	else if(ith == 1 || ith == 3) z += 1;
	else z += 0;
	
	if(jth == 0 || jth == 4) z += 2;
	else if(jth == 1 || jth == 3) z += 1;
	else z += 0;
	
	cout<<z;
	
	return 0;
}