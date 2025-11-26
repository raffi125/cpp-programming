#include <iostream>
using namespace std;

int main() {

    // Bilangan biner 10.111010₂
    // Bagian kiri = 10₂ → 2
    // Bagian kanan = .111010₂

    int bagianKiri = 0;
    bagianKiri += 1 * 2;   // 1 × 2¹
    bagianKiri += 0 * 1;   // 0 × 2⁰

    float bagianKanan = 0;
    float p = 0.5f;        // 2^-1

    int bit[] = {1,1,1,0,1,0};  // 111010

    for (int i = 0; i < 6; i++) {
        bagianKanan += bit[i] * p;
        p /= 2;
    }

    float hasil = bagianKiri + bagianKanan;

    cout << "Desimal = " << hasil << endl;
}
