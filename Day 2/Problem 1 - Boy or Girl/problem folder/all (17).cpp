#include <bits/stdc++.h>
using namespace std;

int main() {
	    string s;
	    cin >> s;
	    
	    unordered_set<char> ch;
	    for(char c : s){
	        ch.insert(c);
	    }
	    
	    if(ch.size()%2 != 0){
	        cout << "IGNORE HIM!\n";
	    }else{
	        cout << "CHAT WITH HER!\n";
	    } 
}
