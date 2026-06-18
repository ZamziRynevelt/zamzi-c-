#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "15: ";
    cin >> num1;

    cout << "5: ";
    cin >> num2;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;

    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "Product = " << product << endl;
    cout << "Quotient = " << quotient << endl;

    return 0;
}
