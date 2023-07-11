#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>v;
       int ctr=1;
       for(int i=0;i<n;i++)
        v.push_back(make_pair(end[i],start[i])); 
        //1.Push the pair of starting and finish time and their index as pair in another list.
        
        sort(v.begin(),v.end());
        //2.Sort the meetings according to their finishing time.
        int previous=v[0].first;
        for(int i=1;i<n;i++){
        if(previous<v[i].second){
           ctr++;
           previous=v[i].first;
          }
        }
       //3.If the start time of current meeting is greater than or equal to the finish time of previously selected meeting then increment the counter and update previously selected meeting.
       
        return ctr;
     }
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends