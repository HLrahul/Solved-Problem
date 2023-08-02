//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        if(A[0][0] == 0) return -1;
        
        queue<pair<int, int>> q;
        vector<vector<bool>> visited(N, vector<bool>(M, false));
        int path = 0;
        
        q.push({0, 0});
        visited[0][0] = true;
        
        while(!q.empty()) {
            int size = q.size();
            
            for(int i = 0; i < size; i++) {
                auto cur = q.front();
                q.pop();
                
                if(cur.first == X && cur.second == Y) return path;
                
                if(cur.first+1 < N && !visited[cur.first+1][cur.second] && A[cur.first+1][cur.second] == 1) {
                    q.push({cur.first+1, cur.second});
                    visited[cur.first+1][cur.second] = true;
                }
                if(cur.first-1 >= 0 && !visited[cur.first-1][cur.second] && A[cur.first-1][cur.second] == 1) {
                    q.push({cur.first-1, cur.second});
                    visited[cur.first-1][ cur.second] = true;
                }
                if(cur.second+1 < M && !visited[cur.first][cur.second+1] && A[cur.first][cur.second+1] == 1) {
                    q.push({cur.first, cur.second+1});
                    visited[cur.first][ cur.second+1] = true;
                }
                if(cur.second-1 >= 0 && !visited[cur.first][cur.second-1] && A[cur.first][cur.second-1] == 1) {
                    q.push({cur.first, cur.second-1});
                    visited[cur.first][ cur.second-1] = true;
                }
            }
            
            path++;
        }
        
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends