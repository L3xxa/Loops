#include <iostream>
using namespace std;

int main() {
	int number, sum = 0;
	cout << "Enter numbers (enter 0 to stop): " << endl;

	while (true) {
		cin >> number;
		if (number == 0) {
			break;
		}
		sum += number;
		cout << "Sum: " << sum << endl;
	}

	return 0;
}
