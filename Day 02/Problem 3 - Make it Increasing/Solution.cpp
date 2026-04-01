#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n ;i++){
            cin >> a[i];
        }
        bool possible = true;
        int m =0;
        for(int i = n-1; i >0; i--){
            while(a[i] <= a[i-1]){
                if(a[i-1] == 0){
                possible = false;
                break;
                }
                a[i-1] /= 2;
                m++;                
            }
            if(possible == false){
                break;
            }
        }
        if (possible == false){
            cout << -1 << endl;
        }else{
            cout << m << endl;
        }
    }
}