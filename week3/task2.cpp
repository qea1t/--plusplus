#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    int N;
    cin >> N;
    switch (N) {
    case 1:
        cout << "ѳ����" << endl << "January";
        break;
    case 2:
        cout << "�����" << endl << "February";
        break;
    case 3:cout << "��������" << endl << "March";
        break;
    case 4:
        cout << "������" << endl << "April";
        break;
    case 5:
        cout << "�������" << endl << "May";
        break;
    case 6:
        cout << "�������" << endl << "June";
        break;
    case 7:
        cout << "������" << endl << "July";
        break;
    case 8:
        cout << "�������" << endl << "August";
        break;
    case 9:
        cout << "��������" << endl << "September";
        break;
    case 10:
        cout << "�������" << endl << "October";
        break;
    case 11:
        cout << "��������" << endl << "November";
        break;
    case 12:
        cout << "�������" << endl << "December";
        break;
    default: cout << "error";
    }
    return 0;
}
