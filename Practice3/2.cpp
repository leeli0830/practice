#include<iostream>
#include<fstream>

using namespace std;

int main() {

    string myText;

    ifstream MyFileRead("test.txt");

    while (getline (MyFileRead, myText)) {
        cout << myText << endl;
    }

    MyFileRead.close();
}