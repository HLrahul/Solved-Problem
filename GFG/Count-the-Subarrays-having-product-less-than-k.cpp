class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long p = 1;
        int ans = 0, i = 0, j = 0;
        
        for(i = 0, j = 0; j < n; j++) {
            p *= a[j];
            
            while(p >= k && i < j) {
                p /= a[i];
                i++;
            }
            
            if(p < k) ans += (j-i+1);
            
        }
        
        return ans;
    }
};