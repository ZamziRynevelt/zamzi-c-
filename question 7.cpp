#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "apple: ";
    cin >> str;

    if (str.find('a') != string::npos)
        cout << "Contains 'a'";
    else
        cout << "Does not contain 'a'";

    return 0;
}
