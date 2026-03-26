#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--){
        long long n; 
        long long k;
        cin >> n;
        cin >> k;
        vector<long long> a(n+1);
        a[0] = 0;
        for(long long i = 1; i<=n; i++){
            cin >> a[i];
        }
        
        vector<long long> b(k+1);
        b[0] = 0;
        for(long long i = 1; i<=k; i++){
            cin >> b[i];
        }
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long c=0;
        long long d=0;
        for(long long i=1; i<=n; i++){
            d = d + a[i];
        }
        
        long long p = n+1;
        for(long long i=1;i <=k ; i++){
            p = p - b[i];
            if(p >= 1){
                c = c + a[p];
            }
        }
        
        cout << (d - c) << endl;
    }
}
