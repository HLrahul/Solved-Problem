#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        unordered_map<int, int> HashMap;
        for(int i = 0; i < n; i++) HashMap[arr[i]]++;
        
        //To just print the Key and Values in the HashMap.
        // for(auto it = HashMap.begin(); it != HashMap.end(); it++){
        //     cout<<it -> first<<" : "<<it -> second<<endl;
        // }
        
        for(int i = 0; i < n; i++){
            auto temp = HashMap.find(arr[i]);
            if(temp -> second == 1) return arr[i];
        }
        
        return 0;
    } 
};

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        for (int i=0; i<n; i++) cin>>arr[i];
        Solution ob;
        cout<<ob.firstNonRepeating(arr, n)<<endl;
    }
}
