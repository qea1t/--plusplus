#include <iostream>
#include <Math.h>
#include <iomanip> 
using namespace std;

int main() {
    bool answ;
    int a, b;
    float a1, b1;
r:cout << "Enter values" << endl;
    cin >> a >> b;
    a1 = 1 / float(a);
    b1 = 1 / float(b);
    answ = (a1 == b1);
    cout << (answ ? "Results are equal (by 0.000001 epsilon)" : "Results are not equal (by 0.000001 epsilon)") << endl;goto r;
    return 0;
}
