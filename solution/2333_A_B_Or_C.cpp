// LC: 2333 A B Or C
// Title: A B Or C
// Difficulty: Medium
// Date: 14 April 2026

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<pair<long long,int>> v;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < 3; j++){
                long long temp;
                cin >> temp;
                v.push_back({temp, i});
            }
        }

        sort(v.begin(), v.end());

        map<int,long long> mp;
        int l = 0;
        long long ans = INT_MAX;

        for(int r = 0; r < v.size(); r++){
            mp[v[r].second]++;

            while(mp.size() == n){
                    ans = min(ans, v[r].first - v[l].first);

                int group = v[l].second;
                mp[group]--;

                if(mp[group] == 0) mp.erase(group);
                l++;
            }
        }

        cout << ans << "\n";
    }
}