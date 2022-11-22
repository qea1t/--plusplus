#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int random(int min, int max)
{
	max++;
	return abs(rand() % (max - min)) + min;
}

int main() {
	srand(time(0));
	int arr[12], a;
	for (int i = 0;i < 12;i++) {
		arr[i] = random(-10,30);
	}

	for (int i = 0;i < 12;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0;i < 12;i++) {
		if (arr[i] < 0) arr[i] = 0;
	}

	for (int i = 0;i < 12;i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
