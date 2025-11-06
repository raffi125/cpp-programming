#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;
    cout << "masukkan 3 nilai: ";
    cin >> n1 >> n2 >> n3;

    // rumus rata rata dari bilangan bulat
    int rata = ((n1+n2+n3)/3);

    cout << "rata dari 3 bilangan bulat: " << rata << endl;
    return 0;
}