#include <iostream>
using namespace std;
int main()
{
    int n;
    int* x_ptr = &n;
    cout << "Enter n: ";
    cin >> n;
    int* Arr;
    Arr = new int[n];
    cout << "Array:" << endl;
    for (int i = 0; i < n; i++) cin >> *(Arr + i);
    int sum = 0;
    for (int i = 0 + 1; i < n; i++) 
    {
        sum += Arr[i];
    }
    cout << "Sum = " << sum << endl;
    return 0;
}