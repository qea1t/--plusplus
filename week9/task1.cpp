#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	srand(time(0));
	int max=0,min =0, index;
	int arr[12],a;
	for (int i = 0;i < 12;i++) {
		arr[i] = rand() % 10 + 1;
	}
	
	cout << "Unsorted array = [ ";
	for (int i = 0;i < 12;i++) cout << arr[i] <<" ";
	cout <<"]" << endl;

	for (int i = 0; i < 12; i++) {
		max = 0;
		for (int j = i; j < 12;j++) {
			if (arr[j] > max) {
				max = arr[j];
				index = j;
			}
		}
		arr[index] = arr[i];
		arr[i] = max;
	}

	cout << "In descending order = [";
	for (int i = 0;i < 12;i++)cout << arr[i] << " ";
	cout <<"]" << endl;
	
	for (int i = 0; i < 12; i++) {
			min = arr[i];
			for (int j = i+1; j < 12;j++) {
				if (arr[j] < min) {
					min = arr[j];
					index = j;
				}
			}
			arr[index] = arr[i];
			arr[i] = min;
		}

	cout << "In ascending order = [ ";
	for (int i = 0;i < 12;i++)cout << arr[i] << " ";
	cout << "]" << endl;

	return 0;
}
