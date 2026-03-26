#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;
    int n = 12;
    vector < int > v;
    for (int m = 0; m < 12; m++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    int sum = 0;
    int j = 0;
    for (int i = 11; i >= 0; i--) {
        if (sum >= k) {
            cout << j << endl;
            return 0;
        }
        sum = sum + v[i];
        j++;
        if(j==12 && sum>=k){
            cout << j;
            return 0;
        }
    }
    cout << -1 << endl;
}