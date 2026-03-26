#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); // Faster I/O
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        s = " " + s + "C"; // Add a space to make it 1-indexed and 'C' as a stopper

        long long p1 = 1; // Initialize!
        long long p2 = 1; // Initialize!
        long long ans = 0; // Initialize!

        // Skip leading B's
        while(p1 <= n && s[p1] == 'B') {
            p1++; p2++;
        } 
        
        while(p1 <= n) {
            int cntA = 0;
            int cntB = 0;
            while(p2 <= n && s[p2] == 'A') {
                p2++;
                cntA++;
            }
            while(p2 <= n && s[p2] == 'B') {
                p2++;
                cntB++;
            }
            
            if(s[p2 - 1] == 'B') {
                ans += (p2 - p1 - 1);
            }
            
            if(cntB > 0) {
                p1 = p2 - 1;
            } else {
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}