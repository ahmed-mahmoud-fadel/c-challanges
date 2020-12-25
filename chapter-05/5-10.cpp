/*
 * =====================================================================================
 *    Description:  Exercise 5.10 - Factorials.
 * =====================================================================================
 */
#include <iostream>
using namespace std;

int factorial(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}

	return f;
}





int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	cout << endl;

	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t" << factorial(i) << endl;
	}

	system("pause");
}