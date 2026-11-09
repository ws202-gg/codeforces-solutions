#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    if (a <= b) {
        cout << -1 << '\n';
    }
    else {
        int result = min(b, a - b);
        cout << result << '\n';
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
