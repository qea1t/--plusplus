#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int arr[4][3], k = 0;
	srand(time(0));
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
			arr[i][j] = rand() % 10 + 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 4; i++) {
		k = 0;
		for (int j = 0; j < 3; j++)
			if (arr[i][j] % 2 == 0) k++;
		cout << "line " << i + 1 << " - " << k << endl;
	}
	return 0;
}
