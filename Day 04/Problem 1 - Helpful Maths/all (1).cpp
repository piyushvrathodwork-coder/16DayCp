#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    multiset<int> ms;

    for (int i = 0; i < str.length(); i += 2) {
        ms.insert(str[i] - '0');   // convert char to int
    }

    int cnt = 0;
    for (int x : ms) {
        if (cnt > 0) cout << "+";
        cout << x;
        cnt++;
    }
}

