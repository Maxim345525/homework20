#include<iostream>
using namespace std;
int main()
{
	int a = 13;
	int b = 33;
	int* x_ptr = &a;
	int* b_ptr = &b;
	cout << "number->" << endl;
	cout << *x_ptr << endl;
	cout << *b_ptr << endl;
	if (a > b)
	{
		cout << "Max number->" << a << endl;
	}
	else(a < b);
	{
		cout << "Max number->" << b << endl;
	}
}