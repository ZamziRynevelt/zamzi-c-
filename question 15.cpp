#include <iostream>
using namespace std;

int main()
{
    float num1, num2;

    cout << "12.5, 8.3: ";
    cin >> num1 >> num2;

    float larger = (num1 > num2) ? num1 : num2;

    cout << "Larger number = " << larger;

    return 0;
}
