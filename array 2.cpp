#include <iostream>
using namespace std;
int main() {
	//Deklarasi array
	int A[5][5];
	int B[3][3];
	// Mengisi array A[5][5] dengan angka 1-25
	int angka = 1;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			A[i][j] = angka;
			angka++;
		}
	}
	// Menampilkan array A 
	cout << "Array A[5][5]:" << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	// Menampilkan array B[3][3] dengan nilai sesuai gambar b.
	B[0][0] = 4; B[0][1] = 5; B[0][2] = 3;
	B[1][0] = 4; B[1][1] = 5; B[1][2] = 5;
	B[2][0] = 9; B[2][1] = 8; B[2][2] = 7;
	//Menampilkan array B
	cout << "Array B[3][3]:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
