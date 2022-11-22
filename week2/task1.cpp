#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int x;
    cout << "enter x: ";
    cin >> x;
    if (x >= 0) cout << cos(x) - pow(sin(x), 3);
    else if (x < 0) cout << x * exp(-x) + (1 / (x - 1.3));
    return 0;
}
