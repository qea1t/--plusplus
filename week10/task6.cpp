#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int display(int array[]) {
	for (int i = 0;i < 10;i++) cout << array[i] << " ";
	cout << endl;
	return 0;
}

int main() {
	srand(time(0));
	int nulle = -1;
	int arr[10];
	for (int i = 0;i < 10;i++) {
		arr[i] = rand() % 10 + 0;
	}
	for (int i = 0;i < 10;i++) cout << arr[i] << " ";
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (arr[i] == 0) {
			nulle = i;
			break;
	}}
	if (nulle != -1) cout << "Number null element " << nulle;
	else cout << "Its array dont have null elemnts";
	return 0;
}
