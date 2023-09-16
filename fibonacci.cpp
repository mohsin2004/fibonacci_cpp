#include<iostream>

using namespace std;

int main()
{
	int n, a = 0, b = 1, show =0;

	cout << "Enter the number of terms for Fibonacci series: ";
	cin >> n;

	cout << "\nFibonacci series:" << endl;
	
	for (int i = 0; i < n-2; i++)
	{
		if (show == 0)
		{
			cout << a << ", ";
		}
		if (show == 1)
		{
			cout << b << ", ";
		}
		show = a + b;
		a = b;
		b = show;

		cout << show << ", ";

	}
}