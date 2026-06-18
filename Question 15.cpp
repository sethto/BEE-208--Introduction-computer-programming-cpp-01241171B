#include <iostream>
using namespace std;
int main() {
	int decimal = 0;
	long long binary;
	int base =1, rem
	cout<< "Enter a binary number: ";
	cin >> binary;
	long long temp =binary;
	while (temp >0) {
		rem =temp % 10;
		decimal += rem *base;
		base *= 2;
		temp /= 10;
	}
	cout<< "Decimal = "<< decimal;
	cout<< "Hexadecimal = "<< hexa<< decimal;
	cout << "Octal = " <<oct<<decimal;
	return 0;
}
