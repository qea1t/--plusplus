#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N, counter = 0, first, last, i = 1;
    cin >> N;
    int A = N;
    while (A != 0) {
        counter++;
        A /= 10;
    }
    last = N % 10;
    first = N / pow(10, counter - 1);
    N = N / 10;
    i = pow(10, counter - 2);
    N = N % i;
    cout << last << N << first << endl;

    return 0;
}
