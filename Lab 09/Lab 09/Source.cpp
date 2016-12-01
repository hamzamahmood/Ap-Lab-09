#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void linear(float a, float b) {
	float ans = 0;
	ans = (-1 * b) / a;
	cout << "ANS: x = " << ans;
	cout << endl << endl;
}
void quad(float a, float b, float c) {
	double det = (b * b) - (4 * a * c);
	double ans1 = 0;
	double ans2 = 0;
	if (det < 0) {
		cout << "Imaginary Roots!";
		cout << endl << endl;
	}
	else if (det == 0) {
		ans1 = (-1 * b) / (2 * a);
		cout << "Real and euqal roots!\n";
		cout << "Root 1 = " << ans1 << "\t";
		cout << "Root 2 = " << ans1;
		cout << endl << endl;
	}
	else {
		ans1 = ((-1 * b) + (sqrt(det)))/(2 * a);
		ans2 = ((-1 * b) - (sqrt(det))) / (2 * a);
		cout << "Real and different roots!\n";
		cout << "Root 1 = " << ans1 << "\t";
		cout << "Root 2 = " << ans2;
		cout << endl << endl;
	}
}

int main() {
	int choice = 0;
	float a, b, c, d;
	while (choice != -1) {
		cout << "Enter \" 1\"  to solve Linear Equation    Format(ax + b = 0)\n";
		cout << "Enter \" 2\"  to solve Quadratic Equation Format(ax^2 + bx + c = 0)\n";
		//cout << "Enter \" 3\"  to solve Cubic Equation     Format(ax^3 + bx^2 +cx + d = 0)\n";
		cout << "Enter \"-1\"  to exit\n";
		cout << "----------------------------------------------------------------------------\n";
		cin >> choice;

		if (choice == 1) {
			cout << "Format(ax + b = 0)\n";
			cout << "Enter value of a and b (a space b): ";
			cin >> a;
			cin >> b;

			linear(a, b);
		}
		else if (choice == 2) {
			cout << "Format(ax^2 + bx + c = 0)\n";
			cout << "Enter value of a , b and c (a space b space c): ";
			cin >> a;
			cin >> b;
			cin >> c;

			quad(a, b, c);
		}
	}
	return 0;
}