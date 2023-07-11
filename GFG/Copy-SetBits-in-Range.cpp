//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        bitset<32> binaryX(x);
        bitset<32> binaryY(y);
        
        const int numbits = r - l + 1;
        bitset<32> bitmask((1 << numbits) - 1);
        bitset<32> extracted((binaryY >> (l-1)) & bitmask);
        
        extracted = extracted << (l-1);
        // cout<<binaryX<<endl<<endl<<binaryY<<endl<<extracted<<endl<<endl;
        binaryX |= extracted;
        // cout<<binaryX<<endl;
        unsigned long result = binaryX.to_ulong();
        
        return result;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends