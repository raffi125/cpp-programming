#include <iostream>

using namespace std;

int main() {
    int diamater;
    cout << "Masukkan nilai diameter: ";
    cin >> diamater;

    //rumus keliling diameter
    float k = (3.14159 * diamater); // harus pake variable float karena ada isinya phi

    cout << "hasil keliling diameter : " << k << endl;
    return 0;
}