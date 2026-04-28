// LC: 0000 Mex Spectrum
// Title: Mex Spectrum
// Difficulty: Medium
// Date: 28 April 2026

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> mp(n+1,0);
        
        for(auto& i: v){
            cin>>i;
            mp[i]++;
        }
        
        int cnt = 0;
        
        for(int i=0; i <= n; i++){
            
            int curr = mp[i];
            int prev = i - cnt;
            
            cout<<max(curr,prev)<<" ";
            
            if(mp[i] != 0){
                cnt++;
            }
            
        }
        cout<<endl;
        
        
    }

}
