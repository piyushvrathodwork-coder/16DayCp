#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int t;
    cin >> n;
    cin >> t;
    
    long long f=t;
    
    if(n>=1 && n<=100 && t>=2 && t<10){
        cout << f;
        for(int i=0; i<n-1; i++){
            cout<<0;
        }
    }else if(n>1 && n<=100 && t==10){
        cout << f;
        for(int i=0; i<n-2; i++){
            cout << 0;
        }
    }else if(n == 1 && t ==10){
        cout <<-1;
    }else{
        cout <<-1;
    }    
   
}

