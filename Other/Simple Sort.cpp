/*Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.*/

#include <iostream>


using namespace std;

int main()
{
	int arr[3], temp[3], swap;

	for (int j = 0; j < 3; j++)
	{
		cin >> arr[j];
		temp[j] = arr[j];
	}

	for (int i = 1; i < 3; i++)
	{
		swap = arr[i];
		while (swap < arr[i - 1] && (i - 1) >= 0)
		{
			arr[i] = arr[i - 1];
			i--;
		}
		arr[i] = swap;
	}

	for (int j = 0; j < 3; j++)
	{
		cout << arr[j] << endl;
	}
	cout << endl;

	for (int j = 0; j < 3; j++)
	{
		cout << temp[j] << endl;
	}
	system("pause");
}
