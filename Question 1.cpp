#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "sum = " << a + b;
	cout << "Difference = " << a- b;
	cout << "Product = " << a * b;
	if (b != 0)
	cout << "Qotient = "<< (float)a / b;
	cout << "Division by zero is not allowed.";
	return 0;
}
