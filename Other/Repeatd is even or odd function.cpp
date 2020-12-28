#include <iostream>
using namespace std;

void isEvenorOdd(int num);
int main()
{
	int num;
	char end;
	
	do 
	{
		cout << "please enter number: " ;
		cin >> num;
		isEvenorOdd(num);
		cout << "Do you want check another number (y/n)" << endl;
		cin >> end;
	} while (end != 'n');

	system("pause");
}

void isEvenorOdd(int num)
{
	if (num % 2 == 0)
		cout << "The number is even." << endl;
	else
		cout << "The number is odd." << endl;
}

