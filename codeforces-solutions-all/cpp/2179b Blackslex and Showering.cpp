#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    

  ind total_sum = 0;
        for (int i = 0; i < n - 1; i++) {
            long long diff = a[i] - a[i+1];
            if (diff < 0) diff = -diff; 
            total_sum += diff;
        }
        
    return 0;
}