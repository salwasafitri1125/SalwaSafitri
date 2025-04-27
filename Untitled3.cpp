#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Masukan bilangan : ";
	cin >> n;
	
	if(n % 2 == 0) {
		cout << n << " adalah bilangan genap" << endl;
	} else {
		cout << n << " adalah bilangan ganjil" << endl;
	}
	
	return 0;
}
