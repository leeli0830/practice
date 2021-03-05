#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "123_.def";

    if (str.length() >= 16)
    {
        str = str.substr(0, 15);
    }

    if (str.back())
        cout << "str: " << str << endl;
}