#include<bits/stdc++.h>
using namespace std;

int main(){
    set<char> char_set;
    int n; cin>>n;
    
    for(int i = 0; i < n; i++){
        char c; cin>>c;
        char_set.insert(tolower(c));
    }
    if(char_set.size() >= 26) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}