#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Input number a->";
    cin >> a;
    cout << "Input number b->";
    cin >> b;
    cout << "Input znak d->";
    cin >> d;
    if (d == ' + ' )
    {
        cout << a + b << endl;
        return 0;
    }
    if (d == '-')
    {
        cout << a - b << endl;
    }
    if (d == '*')
    {
        cout << a * b << endl;
    }
    if (d == '/')
    {
        cout << a / b << endl;
    }
}