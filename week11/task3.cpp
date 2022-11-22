#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int arr[5][7], k = 0;
	srand(time(0));
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 7; j++)
			arr[i][j] = rand() % 10 + 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 5; i++) {
		k = 0;
		for (int j = 0; j < 7; j++)
			 k+=arr[i][j];
		cout << "Sum line " << i + 1 << " = " << k << endl;
	}
	return 0;
}
