#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "Input number->";
	cin >> a;
	int* x_ptr = &a;
	if (a > 0 || a == 0)
	{
		cout << *x_ptr << "  Znak +" << endl;
		return 0;
	}
	else(a < 0);
	{
		cout << *x_ptr << "   Znak -" << endl;
	}
}