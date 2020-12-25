#include <iostream>

using namespace std;

int main()
{
	int number, num1, num2, num3, num4, num5;
	cout << "Enter number: " << endl;
	cin >> number;

	for (int i = 1; i <= 5; i++)
	{
		switch (i)
		{
		case 1:
			num1 = number % 10; break;
		case 2:
			num2 = number % 10; break;
		case 3:
			num3 = number % 10; break;
		case 4:
			num4 = number % 10; break;
		case 5:
			num5 = number % 10; break;
		}
		number /= 10;
	}

	if (num5 == num1 && num4 == num2)
		cout << "It's a palindrome number.";
	else
		cout << "It is not a palindrome number.";




	system("pause");
}