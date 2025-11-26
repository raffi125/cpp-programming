#include <iostream>
using namespace std;

int main() {

    float n = 2.91;

    // =======================
    // BAGIAN BULAT
    // =======================
    int bulat = (int)n;        // 2
    float pecahan = n - bulat; // 0.91

    cout << "Biner = ";

    // Bulat → biner (sederhana)
    int b[50], k = 0, temp = bulat;

    while (temp > 0) {
        b[k++] = temp % 2;
        temp /= 2;
    }
    for (int i = k - 1; i >= 0; i--) cout << b[i];

    cout << ".";

    // =======================
    // PECAHAN → BINER
    // =======================
    for (int i = 0; i < 8; i++) {     // ambil 8 digit pecahan
        pecahan *= 2;
        int digit = (int)pecahan;
        cout << digit;
        pecahan -= digit;
    }

    cout << endl;
}
