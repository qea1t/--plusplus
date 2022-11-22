#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;



int main() {
	srand(time(0));
	int max = 0, max2=0;
	int arr[10],a;
	for (int i = 0;i < 10;i++) {
		a = rand() % 10 + 1;
		arr[i] = a;
		if (a > max) max = a;
	}
	for (int i = 0;i < 10;i++) cout << arr[i] << " ";
	cout << endl;
	for (int i = 1;i < 10;i++) {
		if (max2 < arr[i] && arr[i] != max) {
			max2 = arr[i];	
		}
	}
	cout << "the second largest = " << max2 << endl;

	return 0;
}
