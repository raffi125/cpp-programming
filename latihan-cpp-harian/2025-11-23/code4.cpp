#include <iostream>
using namespace std;

int main() {

    // =======================
    // HEX 5F → DESIMAL
    // =======================
    int des = 0;

    // 5F = (5 × 16¹) + (F × 16⁰)
    des += 5 * 16;         // 5 × 16¹
    des += 15;             // F = 15

    cout << "Desimal = " << des << endl;

    // =======================
    // DESIMAL → BINER
    // =======================
    cout << "Biner = ";
    int b[50], k = 0, temp = des;

    while (temp > 0) {
        b[k++] = temp % 2;
        temp /= 2;
    }

    for (int i = k - 1; i >= 0; i--) cout << b[i];
    cout << endl;

    // =======================
    // DESIMAL → OKTAL
    // =======================
    cout << "Oktal = ";
    k = 0; temp = des;

    while (temp > 0) {
        b[k++] = temp % 8;
        temp /= 8;
    }

    for (int i = k - 1; i >= 0; i--) cout << b[i];
    cout << endl;
}
