#include <iostream>
#include <cstdlib>
#include <string>  

using namespace std;

int main() {
    string input;
    bool isPalindrome = true;

    cout << "Masukkan kata (maksimum 255 karakter): ";
    cin >> input;

    int length = input.length();

    for (int i = 0; i < length / 2; i++) {
        if (input[i] != input[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    // Menampilkan hasil
    if (isPalindrome) {
        cout << input << " adalah palindrom." << endl;
    } else {
        cout << input << " bukan palindrom." << endl;
    }

    system("pause");
    return 0;
}