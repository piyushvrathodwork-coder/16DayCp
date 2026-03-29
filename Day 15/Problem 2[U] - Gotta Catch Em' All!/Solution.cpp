#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string S;
    cin >> S;
    int n = S.length();
    int cB=0; 
    int cu=0;
    int cl=0;
    int cb=0;
    int ca=0;
    int cs=0;
    int cr=0;
    for (int i=0;i<n;i++ ){
        if(S[i]== 'B'){
            cB++;
        }else if(S[i] == 'u'){
            cu++;
        }else if(S[i] == 'l'){
            cl++;
        }else if(S[i] == 'b'){
            cb++;
        }else if(S[i] == 'a'){
            ca++;
        }else if(S[i] == 's'){
            cs++;
        }else if(S[i] == 'r'){
            cr++;
        }
    }
        ca = ca/2;
        cu = cu/2;

        int m = min({cB, cu, cl, cb, ca, cs, cr});
        cout << m;
}