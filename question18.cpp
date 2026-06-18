#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int binary, decimal = 0, rem, i = 0;

    cout << "1: ";
    cin >> binary;

    while (binary != 0)
    {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }

    cout << "Decimal equivalent = " << decimal;

    return 0;
}
