#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int arr[3][3], sum=0;
	srand(time(0));
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			arr[i][j] = rand() % 10 + 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			if (i == j) sum += arr[i][j];
	}
	cout << "The sum of elements along the diagonal = " << sum << endl;
	return 0;
}
