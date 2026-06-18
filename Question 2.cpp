#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double radius, area;
	const double pi = 3.14159;
	cout << "Enter radius: ";
	cin >> radius;
	area = pi * pow(radius, 2);
	cout << "Area = " << area;
	return 0;
	}