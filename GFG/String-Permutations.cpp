//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void permute(string p, string up, vector<string> &res) {
        if(up.size() == 0) {
            res.push_back(p);
            return;
        }
        
        char ch = up[0];
        for(int i = 0; i <= p.size(); i++) {
            string f = p.substr(0, i);
            string s = p.substr(i);
            
            permute(f+ch+s, up.substr(1), res);
        }
    }
    
    public:
    vector<string> permutation(string S) {
        vector<string> res;
        
        permute("", S, res);
        
        sort(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends