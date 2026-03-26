#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, q;
    cin >> n >> q;
 
    vector < long long > v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    sort(v.begin(), v.end());
    vector < long long > prefix(n+1);
    prefix[0] = 0;
    for (long long i = 0; i < n; i++) {
        prefix[i+1] = prefix[i] + v[i];
    }
 
    while (q--) {
        long long x, y;
        cin >> x >> y;
        long long sum = prefix[n - (x - y)] - prefix[n - x];
        cout << sum << "\n";
    }
}