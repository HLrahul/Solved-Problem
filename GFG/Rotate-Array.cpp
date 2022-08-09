#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
    void rotateArr(int arr[], int d, int n){
        d = d%n;
        int temp[d+1];
        
        if(n == d) reverse(arr, arr+n);
        else{
            for(int i = 0; i < d; i++) temp[i] = arr[i];
            int j = 0;
            for(int i = d; i < n; i++){ arr[j] = arr[i]; j++; }
            int k = 0;
            for(int i = n-d; i < n; i++){ arr[i] = temp[k]; k++; }
        }
    }
};

int main() {
	int t; cin >> t;
	
	while(t--){
	    int n, d;
	    cin >> n >> d;
	    
	    int arr[n];
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    Solution ob;
	    ob.rotateArr(arr, d,n);
	    
	    for(int i =0;i<n;i++) cout << arr[i] << " ";
	    cout << endl;
	}
	return 0;
}