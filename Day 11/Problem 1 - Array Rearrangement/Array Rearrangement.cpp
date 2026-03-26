#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        int x;
        cin >> x;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        for (int j = 0; j < n; j++) {
            cin >> b[j];
        }
 
        int c[n];
        int k;
        for (int i = 0; i < n; i++) {
            k = b[i];
            c[n - i - 1] = k;
        }
 
        int m = 0;
        for (int i = 0; i < n; i++) {
            if ((a[i] + c[i]) <= x) {
                m++;
            }
        }
 
        if (m == n) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}