#include <iostream>
using namespace std;

int main() {

    int okt = 56;

    // OKTAL → DESIMAL
    int des = 0;
    int p = 1;
    int t = okt;

    while (t > 0) {
        int digit = t % 10;
        des += digit * p;
        p *= 8;
        t /= 10;
    }

    cout << "Desimal = " << des << endl;

    // DESIMAL → BINER
    cout << "Biner = ";
    int hasil[50], i = 0, temp = des;

    while (temp > 0) {
        hasil[i++] = temp % 2;
        temp /= 2;
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
