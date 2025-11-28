#include <iostream>
#include <cstdlib>
using namespace std;
int main(){

int bilangan;
unsigned long long faktorial = 1; 

cout << "Masukkan bilangan untuk dihitung faktorialnya (Maks 256): ";
cin >> bilangan;

if (bilangan < 0) {
cout << "Faktorial tidak terdefinisi untuk bilangan negatif." << endl;
} else {
for (int i = 1; i <= bilangan; i++) {
faktorial *= i; 
    }

cout << "Faktorial dari " << bilangan << " adalah: " << 
faktorial << endl;
}

system("pause");
}