#include <iostream>

using namespace std;

/*
A mail order house sells five different products whose retail prices are:
product 1 — $2.98, product 2—$4.50, product 3—$9.98, product 4—$4.49 and product 5— $6.87.
Write a program that reads a series of pairs of numbers as follows:
a) product number
b) quantity sold
Your program should use a switch statement to determine the retail price for each product.
Your program should calculate and display the total retail value of all products sold.
Use a sentinel-controlled loop to determine when the program should stop looping and display the final results.
*/

int main()
{
	int number =0;
	double quantity;
	double sum = 0;

	while (number != -1) 
	{
		cout << "\nEnter number of product: (Enter -1 then 0 to display the total retail value of all products sold ) " << endl;
		cin >> number;
		cout << "\nEnter quantity sold: " << endl;
		cin >> quantity;

		switch (number)
		{
		case 1: 
			sum += 2.98 * quantity; break;

		case 2:
			sum += 4.50 * quantity; break;

		case 3:
			sum += 9.98 * quantity; break;

		case 4:
			sum += 4.49 * quantity; break;

		case 5:
			sum += 6.87 * quantity; break;
		
		}
	}
	cout << "\nThe total retail value of all products sold are: " << sum << endl;
	system("pause");
}