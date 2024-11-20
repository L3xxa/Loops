#include <iostream>
#include <windows.h>
using namespace std;	

int main() {
	int a;
	cout << "Enter a number: ";
	cin >> a;

	for (int i = 0; i <= a; i++) {
		cout << i << endl;
		Sleep(500);
	}

	return 0;
}