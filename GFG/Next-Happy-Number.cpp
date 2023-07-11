//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool isHappy(int n) {
        unordered_set<int> visited;
        while (n != 1 && visited.find(n) == visited.end()) {
            visited.insert(n);
            int sum = 0;
            while (n) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            n = sum;
        }
        return n == 1;
    }
    
    int nextHappy(int N){
        N++;
        while (!isHappy(N)) {
            N++;
        }
        return N;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends