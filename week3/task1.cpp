#include <iostream>
using namespace std;

int main()
{
    int N, c = 0, a1, a2, a3;
    cout << "Enter N: ";
    cin >> N;
    a1 = N / 100;
    a2 = N / 10 % 10;
    a3 = N % 10;
    if (a1 > 5) c++;
    if (a2 > 5) c++;
    if (a3 > 5) c++;
    cout << c;
    return 0;
}
