#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int arr[6][4], k = 0;
	srand(time(0));
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 4; j++)
			arr[i][j] = rand() % 9 + 1;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		k = 0;
		for (int j = 0; j < 6; j++)
			if (arr[j][i] % 2 == 0) k++;
		cout << "Column " << i + 1 << " - " << k << endl;
	}
	return 0;
}
