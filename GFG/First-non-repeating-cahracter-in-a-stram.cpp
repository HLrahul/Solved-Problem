//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    string ans = "";
		    
		    int arr[25] = {0};
		    queue<char> q;
		    for(char ch: A) {
		        arr[ch - 'a']++;
		        q.push(ch);
		        
		        //cout<<arr[ch-'a']<<" "<<q.front()<<endl;
		        
		        while(!q.empty()) {
		            if(arr[q.front() - 'a'] == 1){ ans += q.front(); break; }
		            else q.pop();
		        }
		        
		        if(q.empty()) ans += "#";
		    }
		    
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends