#include <iostream>
using namespace std;

// Function using Call by Value
void callByValue(int x)
{
    x = x + 10;
    cout << "Inside callByValue: x = " << x << endl;
}

// Function using Call by Reference
void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside callByReference: x = " << x << endl;
}

int main()
{
    int a = 20;
    int b = 20;

    cout << "Before callByValue: a = " << a << endl;
    callByValue(a);
    cout << "After callByValue: a = " << a << endl;

    cout << endl;

    cout << "Before callByReference: b = " << b << endl;
    callByReference(b);
    cout << "After callByReference: b = " << b << endl;

    return 0;
}