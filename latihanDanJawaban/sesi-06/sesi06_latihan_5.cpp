#include <iostream>
#include <stdlib.h>
using namespace std;

void inputBilangan(int& bilangan){
    cout << "Masukkan bilangan untuk dihitung faktorialnya (Maks 256): ";
    cin >> bilangan;
}
void hitungFaktorial(unsigned long long& faktorial, int bilangan){

    if (bilangan < 0) {
        cout << "Faktorial tidak terdefinisi untuk bilangan negatif." << endl;
    } else 
        // Menghitung faktorial dengan struktut for
        for (int i = 1; i <= bilangan; i++) {
            faktorial *= i; 
        }
        
}

void cetakFaktorial(unsigned long long faktorial, int bilangan){
    cout << "Faktorial dari " << bilangan << " adalah: " << faktorial << endl;
}

int main(){
    int bilangan;
    unsigned long long faktorial = 1;  

    inputBilangan(bilangan);
    hitungFaktorial(faktorial, bilangan);
    cetakFaktorial(faktorial, bilangan);
    system("pause");
}