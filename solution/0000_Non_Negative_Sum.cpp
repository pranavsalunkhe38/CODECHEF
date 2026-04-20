// LC: 0000 Non Negative Sum
// Title: Non Negative Sum
// Difficulty: Medium
// Date: 20 April 2026
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<ll> v(n);
    
    for(auto& i: v){
        cin>>i;
    }
  
    sort(v.begin(), v.end());
    
    ll sum = 0;
    int cnt = 0;
    for(int i=n-1; i >= 0; i--)
     {  
         if(sum + v[i] < 0) break;
        cnt++;
        sum += v[i];
    }
    cout<<cnt<<endl;
    
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}
