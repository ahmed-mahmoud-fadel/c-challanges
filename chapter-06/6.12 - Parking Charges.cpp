#include <iostream>
using namespace std;

double calculateCharges(double hours) {
	double charge = 2;
	if (hours >= 3) {
		for (int i = 1; i <= hours-3; i++) {
			charge += 0.50;
		}
	}
	if (hours == 24) {
		charge = 10;
	}
	return charge;
}



int main() {
	int car = 1;
	double hours,carh1,carh2,carh3;
	while (car <= 3) {
		cout << "Enter customer no." << car << " parking hours: ";
		cin >> hours;
		if (car == 1)
			carh1 = hours;
		else if (car == 2)
			carh2 = hours;
		else if (car == 3)
			carh3 = hours;
		car++;
	}
	cout << "Car\tHours\tCharge" << endl;
	cout << 1 << "\t" << carh1 << "\t" << calculateCharges(carh1) << endl;
	cout << 2 << "\t" << carh2 << "\t" << calculateCharges(carh2) << endl;
	cout << 3 << "\t" << carh3 << "\t" << calculateCharges(carh3) << endl;
	cout << "Total" << "\t" << carh1+carh2+carh3 << "\t" << calculateCharges(carh1)+ calculateCharges(carh2)+ calculateCharges(carh3) << endl;

	system("pause");
}