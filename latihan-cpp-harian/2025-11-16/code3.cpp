#include <iostream>

using namespace std;


int main() {
    int data = 3;
    int nilai[data];

    for(int i = 0; i < data; i++){
        cout << "masukkan Nilai ke " << i + 1 << ": ";
        cin >> nilai[i];
    }    

    int x = nilai[0];
    int y = nilai[1];
    int z = nilai[2];

    cout << "X (Nilai Ke 1): " << x << endl;

    z = z - (x+y);
    cout << "Z (Nilai Ke 1): " << z << endl;
    
    y = y+1;
    cout << "Y (Nilai ke 2): " << y << endl;

    return 0;
}