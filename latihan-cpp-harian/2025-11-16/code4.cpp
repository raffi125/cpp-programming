#include <iostream>

using namespace std;

int main() {
    
    int nn = 2;
    int arr[nn];

    for(int i = 0; i < nn; i++){
        cout << "masukkan nilai ke " << i+1<< ": ";
        cin >> arr[i];
    }

    int m = arr[0];
    int n = arr[1];

    cout << "Nilai Ke 1: " << (m*=n++) << endl;
    cout << "Nilai Ke 2: "<< (m+=--n) << endl;
    return 0;
}