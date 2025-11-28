#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int tahun;
    int masaKerja;
    double gaji = 0; 

    cout << "Tahun: ";
    cin >> tahun;
    cout << "Masa kerja (0-9): ";
    cin >> masaKerja;


    if ((tahun >= 2019) && (tahun < 2024)) {
        switch (masaKerja) {
            case 0: case 1: gaji = 2579400; break;
            case 2: case 3: gaji = 2660700; break;
            case 4: case 5: gaji = 2744500; break;
            case 6: case 7: gaji = 2830900; break;
            case 8: case 9: gaji = 2920100; break;
            default: 
                cout << "Masa kerja tidak ada di tabel (0-9 tahun)." << endl;
        }
    }

    else if (tahun >= 2024) {
        switch (masaKerja) {
            case 0: case 1: gaji = 2785700; break;
            case 2: case 3: gaji = 2873500; break;
            case 4: case 5: gaji = 2964000; break;
            case 6: case 7: gaji = 3057300; break;
            case 8: case 9: gaji = 3153600; break;
            default: 
                cout << "Masa kerja tidak ada di tabel (0-9 tahun)." << endl;
        }
    }
    else {
        cout << "Tidak ada aturan untuk tahun " << tahun << endl;
    }

    
    if (gaji > 0) {
        cout << "Total gaji pokok tahun " << tahun << " Rp. " << (long long)(gaji * 12) << endl;
    }

    system("pause");
    return 0;
}