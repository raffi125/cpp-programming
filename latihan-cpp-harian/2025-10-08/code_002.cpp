#include <iostream>

using namespace std;

int main() {
    int arus, tahanan;
    cout << "masukkan nilai arus: ";
    cin >> arus;
    cout << "masukkan nilai tahanan: ";
    cin >> tahanan;

    //rumus volt
    int volt = (arus*tahanan);
    
    cout << "hasil volt dari arus dan tahanan: " << volt << endl; 

    return 0;
}