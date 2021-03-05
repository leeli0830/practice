#include <string>
#include <iostream>

using namespace std;

int main()
{
    string str = "aBcDe";
    for (int i = 0; i < str.length(); i++)
    {
        cout << "str[i]: " << str[i] << endl;
        if (65 <= str[i] && str[i] <= 90)
        {
            str[i] = str[i] + 32;
            cout << "str[i]: " << str[i] << endl;
        }
    }
    cout << str << endl;
}