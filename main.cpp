#include <iostream>
using namespace std;

int main() {
	int a, b, choise;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter another number: ";
	cin >> b;
	cout << "Enter 1 or 2 or 3: ";
	cin >> choise;

	if (choise == 1) {
		for (int i = a; i <= b; i++) {
			cout << "Even " << (i % 2 == 0) << endl;
		}
	}
	else if (choise == 2) {
		for (int i = a; i <= b; i++) {
			cout << "Odd " << (i % 2 == 1) << endl;
		}
	}
	else if (choise == 3) {
		for (int i = a; i <= b; i++) {
			cout << "Prime " << (i % 7 == 0) << endl;
		}
	}
	else {
		cout << "Invalid choise" << endl;
	}

	return 0;
}