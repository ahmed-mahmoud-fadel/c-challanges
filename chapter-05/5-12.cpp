/*
Description:  Exercise 5.12 - Drawing Patterns with Nested for Loops
*/

#include <iostream>
using namespace std;

int main()
{
	for (int i = 1, j = 10; i <= 10; i++, j--)
	{
		for (int k = 1; k <= 10; k++)
			cout << ((k <= i) ? "*" : " ");
		cout << "     ";
		for (int k = 1; k <= 10; k++)
			cout << ((k <= j) ? "*" : " ");
		cout << "     ";
		for (int k = 10; k >= 1; k--)
			cout << ((k <= i) ? "*" : " ");
		cout << "     ";
		for (int k = 10; k >= 1; k--)
			cout << ((k <= j) ? "*" : " ");


		cout << endl;
	}
}
