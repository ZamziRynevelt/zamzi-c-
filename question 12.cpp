#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "9: ";
    cin >> num;

    if (num % 2 != 0 && num % 3 == 0)
        cout << "The number is odd and divisible by 3";
    else
        cout << "The number does not satisfy the condition";

    return 0;
}
