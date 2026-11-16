#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Санамж: Хэрэв n сондгой бол хамгийн сүүлийн хүнийг 
 * үлдсэн 0 ууртай болсон багийнхантай холбох зардал нь 
 * өөрийнх нь уур g[n-1] байх болно.
 */

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<long long> v(n); // Утгууд том тул long long
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long long total_emeralds = 0;

    // Хос хосоор нь холбох тактик
    // i+1 индекс байхгүй болохоос сэргийлж (i + 1 < n) нөхцөл шалгана
    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n) {
            // Хоёр хүний уурыг багасгахад max(g1, g2) маргад хэрэгтэй
            total_emeralds += max(v[i], v[i+1]);
        } else {
            // Хэрэв нэг хүн үлдвэл (сондгой n), түүнийг 
            // 0 ууртай болсон хүнтэй холбоход зардал нь өөрийнх нь уур болно.
            total_emeralds += v[i];
        }
    }

    cout << total_emeralds << "\n";
}

int main() {
    // Хурдасгах хэсэг
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }

    return 0;
}