#include <bits/stdc++.h>
using namespace std;

int main() {
	    int t;
	    cin >> t;
	    while(t--){
	        int n;
	        cin >> n;
	        vector<long long> v(n);
	        for(int i=0;i<n;i++){
	            cin >> v[i];
	        }
	        
	        if(n % 2 == 0){
	            for(int j=0;j<(n/2);j++){
	                cout << v[j] << " " << v[n-j-1] << " ";
	            }
	        }else{
	            for(int j=0;j<((n-1)/2);j++){
	                cout << v[j] << " " << v[n-j-1] << " ";
	            }
	            cout << v[((n-1)/2)];
	        }
	        cout << endl;
	    }
}
