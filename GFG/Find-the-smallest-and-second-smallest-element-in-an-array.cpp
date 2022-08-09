#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1) cout << -1 << endl;
        else cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

vector<int> minAnd2ndMin(int a[], int n) {
    vector<int> v;
    
    sort(a, a+n);
    v.push_back(a[0]);
    for(int i = 1; i < n; i++){
        if(a[i] > a[i-1]){ v.push_back(a[i]); break; }
    }
    if(v.size() == 1){ v[0] = -1; return v; }
    
    return v;
}