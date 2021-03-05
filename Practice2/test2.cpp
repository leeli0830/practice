#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "z-.";

    if (str.front() == '.')
    {
        str = str.substr(1, str.length() - 1);
    }

    int n = str.length();

    cout << "str.length(): " << str.length() << endl;

    if (str.back() == '.')
    {
        str = str.substr(0, str.length() - 1);
    }

    cout << "str: " << str << endl;
}