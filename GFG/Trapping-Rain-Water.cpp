//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long ans = 0;
        
        int left[n], right[n];
        int leftMax = 0, rightMax = 0;
        for(int i = 0, j = n-1; i < n, j >= 0; i++, j--) {
            leftMax = max(leftMax, arr[i]);
            left[i] = leftMax;
            
            rightMax =  max(rightMax, arr[j]);
            right[j] = rightMax;
        }
        
        for(int i = 0; i < n; i++) {
            int num = min(left[i], right[i]);
            ans += num - arr[i];
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends