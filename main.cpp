#include <iostream>
using namespace std;

int main() {

	int a,sum ;
	cout << "Enter a number: ";
	cin >> a;

	sum = 0;
	for (int i = a; i <= 500; i++) {
		sum += i;
	}
	cout << "The sum of numbers from " << a << " to 500 is " << sum << endl;


	return 0;
}