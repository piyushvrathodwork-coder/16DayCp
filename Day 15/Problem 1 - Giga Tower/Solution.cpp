#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long b = 0;
    if (n == 0){
        b = 8;
        cout << 8 << endl;
    }else if(n > 0){
        for(int i = 0; i<=10;i++){
            int x = n;
            while(x > 0){
                int c = x % 10;
                if (c == 8 && b != 0){
                    cout << b << endl;
                    return 0;
                }
                x /= 10;
            }
            n++;
            b++;
        }
    }else{
        for(int i = 0; i<=10;i++){
            int nn = abs(n);
            while(nn > 0){
                int c = nn % 10;
                if (c == 8 && b != 0){
                    cout << b << endl;
                    return 0;
                }
                nn /= 10;
            }
            n++;
            b++;
        }
    }
}