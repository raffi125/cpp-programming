#include <iostream>

using namespace std;

int main() {
    int angka;
    cout << "Masukkan nilai angka: ";
    cin >> angka;

    cout << "Angka yg awal: "<<  angka << "\n" << " " << endl;

    //Assignment
    angka = angka - 1;
    cout << "angka dikurangi 1 (Assignment): "<< angka <<"\n" << "----" << endl;
    
    //post decrement 
    angka--;
    cout << "angka dikurangi 1 (post decrement): "<< angka <<"\n" << "----" << endl;
    
    //Pre-Decrement
    --angka;
    cout << "angka dikurangi 1 (Pre-Decrement):   "<< angka <<"\n" <<"----"<< endl;
    
    //Compound Assignment
    angka-= 1;
    cout << "angka dikurangi 1 (Pre-Decrement): "<< angka <<"\n" << "----" << endl;

    cout << "angka: " << angka << endl;
    return 0;
}