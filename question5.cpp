#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "5,18: ";
    cin >> num1 >> num2;

    if (num1 > num2)
        cout << "First value is greater";
    else
        cout << "Second value is greater";

    return 0;
}
