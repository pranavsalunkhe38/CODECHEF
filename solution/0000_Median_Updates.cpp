// LC: 0000 Median Updates
// Title: Median Updates
// Difficulty: Hard
// Date: 16 April 2026

 #include <bits/stdc++.h>
using namespace std;


void solve(){
    
    int n;
    string s;
    cin>>n;
    cin>>s;
    
    int flag = true;
    
    for(int i=1; i < n; i++){
        if(s[i] != s[i-1]){
            flag = false;
        }
    }
    if(flag == true){
        cout<<1<<endl;
        return;
    }
    
    flag = true;
    for(int i=0; i < n; i++){
        if(s[i] == s[i-1]){
            flag = false;
        }
    }
    if(s[0] == s[n-1]){
        flag = false;
    }
    
    if(flag == true){
        cout<<-1<<endl;
        return;
    }
    string s2 = s + s;
    long long cnt= 0;
    long long res = INT_MIN;
    for(int i=1; i < 2*n; i++){
        
        if(s2[i] != s2[i-1]){
            cnt++;
        }else{
            cnt = 1;
        }
        
        res = max(res, cnt);
        
    }
    long long ans = (res + 1) / 2;
    cout<<ans<<endl;
    
}
int main() {
    
    int t;
    cin>>t;
    while(t--){
        solve();
        
    }
	// your code goes here

}
