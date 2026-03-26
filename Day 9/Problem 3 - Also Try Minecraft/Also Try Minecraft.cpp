#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    vector < long long > v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector < long long > dfirst(n - 1);
    for (long long i = 0; i < n - 1; i++) {
        if (v[i] - v[i+1] > 0) {
            dfirst[i] = v[i] - v[i+1];
        } else {
            dfirst[i] = 0;
        }
    }

    vector < long long > pre(n);
    pre[0] = 0;
    for (long long i = 0; i < n - 1; i++) {
        pre[i + 1] = pre[i] + dfirst[i];
    }

    vector < long long > dsec(n - 1);
    for (long long i = 0; i < n - 1; i++) {
        if (v[i] - v[i+1] < 0) {
            dsec[i] = v[i] - v[i+1];
        } else {
            dsec[i] = 0;
        }
    }

    vector < long long > post(n);
    post[n-1] = 0;
    for (long long i = n-1; i >0; i--) {
        post[i-1] = post[i] + dsec[i-1];
    }


    while (m--) {
        long long s,t;
        cin >> s >> t;
        long long z;
        if(s<t){
            z= pre[t-1]-pre[s-1];
            cout << z << endl;
        }else if(t<s){
            z = post[s-1]-post[t-1];
            cout << z << endl;            
        }else{
            cout << 0 << "\n";
        }
    }
}