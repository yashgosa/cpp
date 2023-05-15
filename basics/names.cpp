#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name";
    getline(cin, name); // `getline() reads every single word until \n`
    cout << "Welcome" << name;
    return 0;
}