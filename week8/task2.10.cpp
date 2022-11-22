#include <iostream>

using namespace std;

int main(void) {
	
	int n;
	while (true) {
		cout << "Enter n (1 < n < 50) or enter 0 for end task" << endl;
		cin >> n;
		if (n > 1 && n < 50) {
			cout << '+';

			for (int i = 2; i < n; i++) cout << "--";

			cout << '+' << endl;

			for (int i = 2; i < n; i++) {

				cout << '|';
				for (int j = 2; j < n; j++)
					cout << "  ";
				cout << '|' << endl;
			}

			cout << '+';
			for (int i = 2; i < n; i++) cout << "--";

			cout << '+' << endl;
		}
		else if (n == 0) { cout << "Goodbye";break; }
		else cout << "Sorry, the side size is too big"<<endl;
	}
	return 0;
}
