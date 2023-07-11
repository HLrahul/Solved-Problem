//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	   
        int evenSum = 0;
        int oddSum = 0;
        
        // Iterate through the binary number
        for (int i = s.length() - 1; i >= 0; i--) {
            int digit = s[i] - '0'; // Convert char to integer
            
            // Check if position i is even or odd
            if (i % 2 == 0)
                evenSum += digit;
            else
                oddSum += digit;
        }
        
        // Check if the difference between evenSum and oddSum is divisible by 3
        if ((evenSum - oddSum) % 3 == 0)
            return 1; // Divisible by 3
        else
            return 0; // Not divisible by 3
	}
};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends