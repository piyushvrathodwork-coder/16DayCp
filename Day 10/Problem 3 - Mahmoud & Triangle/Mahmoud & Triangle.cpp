#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i =0; i<n; i++){
        int t;
        cin >> t;
        v.push_back(t);
    }
    
    sort(v.begin(),v.end());
    
    for(int j=1;j<n-1;j++){
        if(v[j]+v[j-1]>v[j+1]){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}
