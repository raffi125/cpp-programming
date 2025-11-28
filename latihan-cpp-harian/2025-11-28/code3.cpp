#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
int jmlhBaris;

cout << "Jumlah baris : " ;
cin >> jmlhBaris;

for (size_t baris = 0; baris < jmlBaris; baris++){
    int value = 1;
        for (size_t kolom = 0; kolom <= baris; kolom++) {
        cout << value << " ";
        value = value * (baris - kolom) / (kolom + 1);
    }
cout << endl;  
}
system("pause");
}
