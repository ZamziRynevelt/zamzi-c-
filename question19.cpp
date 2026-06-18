#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int binary, decimal = 0, rem, i = 0, choice;

    cout << "1. Binary to Decimal" << endl;
    cout << "2. Binary to Hexadecimal" << endl;
    cout << "3. Binary to Octal" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "1: ";
    cin >> binary;

    int temp = binary;

    while (temp != 0)
    {
        rem = temp % 10;
        decimal += rem * pow(2, i);
        temp /= 10;
        i++;
    }

    switch(choice)
    {
        case 1:
            cout << "Decimal = " << decimal;
            break;

        case 2:
            cout << "Hexadecimal = " << hex << decimal;
            break;

        case 3:
            cout << "Octal = " << oct << decimal;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
