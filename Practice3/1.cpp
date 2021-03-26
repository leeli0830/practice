#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ofstream MyFile("test1.txt");

    MyFile << "Files can be tricky, but it is fun enough";
    
    MyFile.close();
}