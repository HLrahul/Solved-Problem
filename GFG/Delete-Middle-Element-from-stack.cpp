//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>& s, int sizeOfStack)
    {
        stack<int> stac;
        
        int mid = sizeOfStack/2 + sizeOfStack%2;
        for(int i = sizeOfStack%2; i <= mid; i++) {
            if(i == mid) s.pop();
            else {
                int num = s.top();
                stac.push(num);
                s.pop();
            }
        }
        
        while(stac.size() > 0) {
            s.push(stac.top());
            stac.pop();
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends