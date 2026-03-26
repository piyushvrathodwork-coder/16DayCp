#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector < string > v(n);
    int a = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        for (int j = 0; j < i; j++) {
            if (v[i] == v[j]) {
                a++;
                break;
            }
        }
        if (a != 0) {
            cout << "YES\n";
            a--;
        } else {
            cout << "NO\n";
        };
    }
}