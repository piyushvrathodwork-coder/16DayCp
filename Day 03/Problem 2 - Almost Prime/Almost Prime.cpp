#include <bits/stdc++.h>

using namespace std;


bool isPrime(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cnt++;
        }

    }
    if (cnt == 2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    vector < int > p;
    for (int i = 1; i <= n; i++) {
        if (isPrime(i) == true) {
            p.push_back(i);
        }
    }

    int size = p.size();
    int b = 0;

    for (int i = 1; i <= n; i++) {
        int a = 0;
        for (int j = 0; j < size; j++) {
            if (i % (p[j]) == 0) {
                a++;
            }
        }

        if (a == 2) {
            b++;
        }
    }
    cout << b;
}