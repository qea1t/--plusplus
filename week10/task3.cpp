#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main() {
	srand(time(0));
	int max = 0, min = 0, i_max, i_min = 0;
	int arr[10];
	for (int i = 0;i < 10;i++) {
		arr[i] = rand() % 10 + 0;
	}
	for (int i = 0;i < 10;i++) cout << arr[i] << " ";
	cout << endl;
	min = arr[0];
	for (int i = 0;i < 10;i++) {
		if (max < arr[i]) {
			max = arr[i];
			i_max = i;
		}
		if (min > arr[i]) {
			min = arr[i];
			i_min = i;
		}
	}
	//swap min and max
	arr[i_min] = max;
	arr[i_max] = min;
	for (int i = 0;i < 10;i++) cout << arr[i] << " ";
	cout << endl;
	
	return 0;
}
