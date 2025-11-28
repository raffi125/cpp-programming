#include <iostream>

using namespace std;

int main() {
    int nn = 2;
    int arr[nn];
    for(int i = 0; i < nn; i++){
        cout << "Masukkan Nilai ke " << i+1 << ": "; 
        cin >> arr[i];
    }

    int m = arr[0];
    int n = arr[1];

    cout << "Nilai A: " << m - 8 - n << endl;;

    cout << "Nilai B: " << (m = n = 3) << endl;

    cout << "Niali C: " << m%n << endl;

    cout << "Nilai D: " << m%n++ << endl;

    cout << "Nilai E: " << m%n++ << endl;

    cout << "Nilai F: " << ++m-n-- << endl;

    cout << "Nilai G: " << (m+=n-=2) << endl;
    return 0;
}