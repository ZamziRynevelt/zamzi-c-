#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "2, 5, 9: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "Equal";
    else
        cout << "Not equal";

    return 0;
}
