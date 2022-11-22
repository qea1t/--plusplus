#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double pi4 = 0.,j =1;
	long n;

	r:cout << "Number of iterations? ";
	cin >> n;

	for (int i = 1; i  <= n ; i++,j+=4) pi4 += ((1.0 / j) - (1.0 / (j + 2)));
	
	cout.precision(20);
	cout << "Pi = " << (pi4 * 4.) << endl;goto r;
	return 0;
}

