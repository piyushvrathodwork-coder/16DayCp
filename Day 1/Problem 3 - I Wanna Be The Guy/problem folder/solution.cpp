#include <iostream>
#include <set>
using namespace std;

int main() {
    int l;
    cin >> l;

    set<int> s;

    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int y;
        cin >> y;
        s.insert(y);
    }

    if (s.size() == l)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}
