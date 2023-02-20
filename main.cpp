
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    int* x_ptr = &a;
    cout << "Enter b: ";
    cin >> b;
    int* b_ptr = &b;
    if (a > b) swap(a, b);
    if (a > b) swap(a, b);
    cout << ' ' << *x_ptr << ' ' << *b_ptr << ' ' << '\n';
    system("pause");
    return 0;
}

