#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main() {
	srand(time(0));
	int  counter = 0;
	int arr[10],A;
	for (int i = 0;i < 10;i++) {
		arr[i] = rand() % 10 + 0;
	}
	for (int i = 0;i < 10;i++) cout << arr[i] << " ";
	cout << endl;
	cout << "Enter A: ";
	cin >> A;
	for (int i = 0;i < 10;i++) {
		if (arr[i] > A) counter++;
	}
	cout << "elemets in array>" << A << ": " << counter<<endl;
	
	return 0;
}
