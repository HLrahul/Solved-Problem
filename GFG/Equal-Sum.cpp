#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string equilibrium(int *arr, int n) {
        
        int l = 0, r = 0;
        int mid = n/2;
        for(int i = 0; i < mid; i++) l += arr[i];
        for(int i = mid+1; i < n; i++) r += arr[i];
        
        if(l == r) return "YES";
        else if(l < r){
            for(int i = mid; i < n; i++){
                l += arr[i];
                r -= arr[i+1];
                if(l == r) return "YES";
            }
        }
        else{
            for(int i = mid; i > 0; i--){
                r += arr[i];
                l -= arr[i-1];
                if(l == r) return "YES";
            }
        }
        
        return "NO";
    }
};

int main() {
    int t; cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}