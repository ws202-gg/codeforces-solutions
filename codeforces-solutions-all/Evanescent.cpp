
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;

    cin >> n >> s;

    // Anhnii shahsan moriin urt
    int len = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            len++;
        }
    }

    int ans = len;
// abb 
    // Ehnii bolon suuliin temdegtiig ustgahgui
    for (int i = 1; i < n - 1; i++) {
        int before = (s[i - 1] != s[i]);
        int after = (s[i] != s[i + 1]);
        int joined = (s[i - 1] != s[i + 1]);

        int cur = len - before - after + joined;

        ans = min(ans, cur);
    }

    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
