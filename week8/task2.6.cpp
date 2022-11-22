#include <iostream>

using namespace std;

int main() {
	int c0, counter = 0;
	cout << "Enter Value: ";
	cin >> c0;
	do {
		if (c0 % 2 == 0) c0 /= 2;
		else c0 = 3 * c0 + 1;
		cout << c0 << endl;
		counter++;
	} while (c0 != 1);
	cout << "steps =" << counter;
}
