#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long t;
    cin >> t;
 
    int n;
    int a;
    int b;
    int j;
 
 
    for (int i = 0; i < t; i++) {
        cin >> n;
        cin >> a;
        cin >> b;
        if ((a - b) < 0) {
            j = b - a - 1;
        } else {
            j = a - b - 1;
        };
        if (j % 2 == 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}