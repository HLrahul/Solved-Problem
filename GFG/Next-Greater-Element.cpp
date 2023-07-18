//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> res(n, -1); // Initialize the result vector with -1
        stack<int> stk;

        stk.push(0);

        for (int i = 1; i < n; i++) {
            while (!stk.empty() && arr[stk.top()] < arr[i]) {
                int index = stk.top();
                res[index] = arr[i];
                stk.pop();
            }
            stk.push(i);
        }

        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends