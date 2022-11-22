#include <iostream>
#include <Math.h>
#include <iomanip> 
using namespace std;

int main() {
int a1, a2, a3, a4;
r:cout << "Enter a values: " << endl;
cin >> a1 >> a2 >> a3 >> a4;
if ((a1 < 1 || a1 > 255) || (a2 < 1 || a2 > 255) || (a3 < 1 || a3 > 255) || (a4 < 1 || a4 > 255)) {
    cout << "Error enter value >=1 and <=255" << endl;goto r;
}
cout << a1 << "." << a2 << "." << a3 << "." << a4;


return 0;
