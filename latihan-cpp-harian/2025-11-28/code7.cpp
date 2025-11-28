#include <iostream>
using namespace std;

void inputNilai(int nilai[], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan nilai mahasiswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }
}

void tampilNilai(int nilai[], int jumlah) {
    cout << "\nDaftar nilai mahasiswa:\n";
    for (int n : nilai) { 
        cout << n << " ";
    }
    cout << endl;
}

float hitungRata(int nilai[], int jumlah) {
    int total = 0;
    for (int i = 0; i < jumlah; i++) {
        total += nilai[i];
    }
    return (float)total / jumlah;
}

int cariMaks(int nilai[], int jumlah) {
    int maks = nilai[0];
    for (int i = 1; i < jumlah; i++) {
        if (nilai[i] > maks) {
            maks = nilai[i];
        }
    }
    return maks;
}

int cariMin(int nilai[], int jumlah) {
    int mn = nilai[0];
    for (int i = 1; i < jumlah; i++) {
        if (nilai[i] < mn) {
            mn = nilai[i];
        }
    }
    return mn;
}

int main() {
    int jumlah;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;

    int nilai[100]; // dianggap max 100 mahasiswa

    inputNilai(nilai, jumlah);
    tampilNilai(nilai, jumlah);

    cout << "\nRata-rata nilai = " << hitungRata(nilai, jumlah) << endl;

    int nilaiTertinggi = cariMaks(nilai, jumlah);
    int nilaiTerendah  = cariMin(nilai, jumlah);

    cout << "Nilai tertinggi = " << nilaiTertinggi << endl;
    cout << "Nilai terendah  = " << nilaiTerendah << endl;

    return 0;
}
