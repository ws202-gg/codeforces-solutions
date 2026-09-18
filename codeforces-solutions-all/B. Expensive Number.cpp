#include <bits/stdc++.h> // Бүх стандарт санг агуулна

using namespace std;

// Томоохон тоонууд дээр ажиллахад зориулж 'long long'-ийг товчлох
typedef long long ll;

void solve() {
    // Энд бодлогынхоо үндсэн логикийг бичнэ
    
}

int main() {
    // Оролт, гаралтыг хурдасгах хэсэг
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // Тест кейсийн тоог унших
    while (t--) {
        solve();
    }
    int n;
    cin >> n;
    vector <int> digit;

    int arr[10];   // цифрүүдийг хадгалах массив
    int size = 0;

    while (n > 0) {
        arr[size] = n % 10;  // хамгийн сүүлийн цифр
        n = n / 10;
        size++;
    }

    // Reverse хийх (учир нь эсрэгээр хадгалагдсан)
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}