#include <iostream>
#include <cstring>
using namespace std;

// Prototipe fungsi
void coment(char ket[], int n);

int main() {
    char lagi, c[30];
    int i;

    do {
        cout << "Masukkan nilai = ";
        cin >> i;

        coment(c, i); // parameter aktual
        cout << c;

        cout << "\n\nIngin input lagi [Y/T]: ";
        cin >> lagi;

    } while (lagi == 'Y' || lagi == 'y');

return 0;
}

// Fungsi dengan parameter formal
void coment(char ket[], int n) {
    if (n % 2 == 1)
        strcpy(ket, "---Bilangan Ganjil---");
    else
        strcpy(ket, "---Bilangan Genap---");
}
