#include <iostream>
using namespace std;

int main() {
    int x = 119;
    
    int temp = x;

    // ==========================
    // 1. KONVERSI KE BINER
    // ==========================
    int bin[32], b = 0;
    int n = x;
    while (n > 0) {
        bin[b++] = n % 2;
        n /= 2;
    }

    cout << "Biner      = 0";            
    for (int i = b - 1; i >= 0; i--) {
        cout << bin[i];
    }
    cout << endl;

    // ==========================
    // 2. KONVERSI KE OKTAL
    // ==========================
    int oktal[32], o = 0;
    n = temp;
    while (n > 0) {
        oktal[o++] = n % 8;     // basis 8
        n /= 8;
    }

    cout << "Oktal      = ";
    for (int i = o - 1; i >= 0; i--) {
        cout << oktal[i];
    }
    cout << endl;

    // ==========================
    // 3. KONVERSI KE HEXADESIMAL
    // ==========================
    char hex[32];
    int h = 0;
    n = temp;

    while (n > 0) {
        int sisa = n % 16;
        
        if (sisa < 10)
            hex[h] = '0' + sisa;      // 0-9
        else
            hex[h] = 'A' + (sisa - 10); // A-F
        
        h++;
        n /= 16;
    }

    cout << "Hexa       = ";
    for (int i = h - 1; i >= 0; i--) {
        cout << hex[i];
    }
    cout << endl;
}
