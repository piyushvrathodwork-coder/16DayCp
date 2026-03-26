#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector < int > v(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum=sum+v[i];
    }
    sort(v.begin(),v.end());
    
    int a=0;
    int b=0;
    for(int i=n-1;i>=0;i--){
        a++;
        b=b+v[i];
        if(b > ((sum)/2) ){
            cout << a;
            return 0;
        }
    }
}