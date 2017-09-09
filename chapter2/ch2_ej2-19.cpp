// 2.19 (Arithmetic, Smallest and Largest) Write a program that inputs three integers from the
//      keyboard and prints the sum, average, product, smallest and largest of these numbers.

#include <iostream>

using namespace std;

int main (void) {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "Input three different integers: ";
	cin >> num1 >> num2 >> num3;

	cout << "Sum is:\t\t" << (num1 + num2 + num3) << endl;
	cout << "Average is:\t" << (num1 + num2 + num3) / 3 << endl;
	cout << "Product is:\t" << (num1 * num2 * num3) << endl;
	cout << "Smallest is:\t";
	if (num1 < num2) {
		if (num1 < num3) {
			cout << num1 << endl;
		}
		else {
			cout << num3 << endl;
		}
	}
	else {
		if (num2 < num3) {
			cout << num2 << endl;
		}
		else {
			cout << num3 << endl;
		}
	}
	cout << "Largest is:\t";
	if (num1 > num2) {
		if (num1 > num3) {
			cout << num1 << endl;
		}
		else {
			cout << num3 << endl;
		}
	}
	else {
		if (num2 > num3) {
			cout << num2 << endl;
		}
		else {
			cout << num3 << endl;
		}
	}
	return 0;
}
