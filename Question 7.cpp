#include <iostream>
#include <string>
using namespace std;
int main(){
	string text;
	cout << "Enter a String:";
	cin>>text;
	if (text.find('a') !=string:: npos)
	cout << "contains 'a' ";
	else cout << "Does not cotain 'a'";
	return 0;
}