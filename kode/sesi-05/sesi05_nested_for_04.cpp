#include <iostream>
#include <stdlib.h>
using namespace std;
// mencetak nilai diamond

//       1
//    1  1  1
// 1  1  1  1  1
//    1  1  1
//       1


#include <iostream>
using namespace std;

int main() {
    int n = 3; // jumlah baris atas (segitiga naik)

    // Bagian atas pola
    for (int i = 1; i <= n; i++) {
        // Spasi
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        // Angka 1
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "1 ";
        }
        cout << endl;
    }

    // Bagian bawah pola
    for (int i = n - 1; i >= 1; i--) {
        // Spasi
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        // Angka 1
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "1 ";
        }
        cout << endl;
    }

    return 0;
}

