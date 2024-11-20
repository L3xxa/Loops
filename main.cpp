#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter a number: ";
	cin >> a;
	cout << "Enter another number: ";
	cin >> b;

	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	cout << "The sum of all numbers between " << a << " and " << b << " is " << sum << endl;


	return 0;
}