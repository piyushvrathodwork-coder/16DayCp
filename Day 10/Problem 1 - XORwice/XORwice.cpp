#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
	while(t--){
	    int a;
	    int b;
	    int c;
	    cin >> a >> b;
	    c = max(a,b);
	    int d = (a^c) + (b^c); 
	    cout << d << endl;
	}
}
