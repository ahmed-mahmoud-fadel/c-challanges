#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 4; j >= i; j--)
		{
			cout << " ";
		}
		for (int j = 1; j <= (i*2)-1; j++)
		{
			cout << "*";
		}
		cout << endl;
		}

	for (int k = 4; k >= 1; k--)
	{
		for (int l = 4; l >= k; l--)
		{
			cout << " ";
		}
		for (int l = 1; l <= (k*2)-1; l++)
		{
			cout << "*";
		}
		cout << endl;
	}

	system("pause");
}