#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    
    int y = 0;
    for(int i=0;i<n;i++){
        int cnt = 0;
        for(int j=0; j< n; j++){
            if(v[i]==v[j]){
                cnt++;
            }
        }
        y = max(y,cnt);
    }
    
    cout << y << endl;
}