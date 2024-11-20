#include <iostream>
using namespace std;

int main() {

	int a;
	cout << "Enter a number: ";
	cin >> a;

	int dobutok = 1;
	for (int i = a; i <= 20; i++) {
		dobutok *= i;
	}
	cout << "Dobutok = " << dobutok << endl;

	return 0;
}