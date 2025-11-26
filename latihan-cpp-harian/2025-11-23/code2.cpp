#include <iostream>
using namespace std;

int main() {

    long long b = 1011001101;

    // BINER → DESIMAL
    int des = 0;
    int dua = 1;
    long long t = b;

    while (t > 0) {
        int bit = t % 10;
        des += bit * dua;
        dua *= 2;
        t /= 10;
    }

    cout << "Desimal = " << des << endl;

    // DESIMAL → OKTAL
    cout << "Oktal = ";
    int hasil[50], i = 0;
    int temp = des;

    while (temp > 0) {
        hasil[i++] = temp % 8;
        temp /= 8;
    }
    for (int j = i - 1; j >= 0; j--) cout << hasil[j];
    cout << endl;

    // DESIMAL → HEX
    cout << "Hex = ";
    temp = des; i = 0;

    while (temp > 0) {
        hasil[i++] = temp % 16;
        temp /= 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        if (hasil[j] < 10) cout << hasil[j];
        else cout << char('A' + hasil[j] - 10);
    }
    cout << endl;
}
