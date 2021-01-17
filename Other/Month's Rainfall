#include <iostream>
#include <iomanip>

using namespace std;
/*Write a program that lets the user enter the total rainfall for each of 12 months
into an array of doubles. The program should calculate and display the total rainfall
for the year, the average monthly rainfall, and the months with the highest and lowest amounts.
Do not accept negative numbers for monthaly rainfall figures.*/
int main()
{
	double rainfall[12];
	double total = 0;
	double avg = 0;
	double maxRain = 0;
	double minRain = 0;
	double tempRain = 0;

	//aasign values to rainfall array
	for (int i = 0; i < 12; i++)
	{
		cout << "Please enter rainfall for month " << i + 1 << ": " << endl;
		cin >> rainfall[i];
		//Accept only positive number
		while (rainfall[i] < 0)
		{
			cout << "Not Acceptable" << endl;
			cin >> rainfall[i];
		}
		//calculate total rainfall
		total += rainfall[i];
	}

	//average
	avg = total / 12;

	maxRain = rainfall[0];
	minRain = rainfall[0];

	for (int i = 0; i < 12; i++)
	{
		tempRain = rainfall[i];
		if (tempRain < minRain)
			minRain = tempRain;
		if (tempRain > maxRain)
			maxRain = tempRain;
	}

	cout << "Total rainfall was: " << setprecision(2) << fixed << showpoint << total << endl;
	cout << "Average rainfall was: " << setprecision(2) << fixed << showpoint << avg << endl;
	cout << "Highest rainfall was: " << setprecision(2) << fixed << showpoint << maxRain << endl;
	cout << "Lowest rainfall was: " << setprecision(2) << fixed << showpoint << minRain << endl;
	system("pause");
}
