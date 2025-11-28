#include <iostream>
#include <stdlib.h>
using namespace std;

void inputJumlahBaris(int& jmlBaris){
    cout << "Jumlah baris : " ;
    cin >> jmlBaris;
}

void cetakSegitigaPascal(int jmlBaris){
    for (int baris = 0; baris < jmlBaris; baris++)
    {
        long long value = 1; 

        for (int kolom = 0; kolom <= baris; kolom++) {
            cout << value << " ";
            value = value * (baris - kolom) / (kolom + 1);
        }
        cout << endl; 
    }
}
int main(){
    int jmlBaris;
    inputJumlahBaris(jmlBaris);
    cetakSegitigaPascal(jmlBaris);
    
    system("pause");
}