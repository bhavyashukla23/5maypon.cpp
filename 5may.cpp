#include <iostream>

using namespace std;

int main()
{
	int result;
	result = sizeof(char);
	cout<< "The size of char data type is :" << result << "bytes. \n";
		result = sizeof(int);
	cout<< "The size of int data type is :" << result << "bytes. \n";
		result = sizeof(float);
	cout<< "The size of float data type is :" << result << "bytes. \n";
		result = sizeof(double);
	cout<< "The size of double data type is :" << result << "bytes. \n \n \n \n";
	cout << "PROGRAM TO FIND THE PRODUCT OF TWO NUMBERS ENTERED BY THE USER \n \n";
	float num1 , num2,prod;
	cout << "Enter two numbers whose product is to be found out \n";
	cin >> num1 >> num2;
	prod=(num1 * num2);
	cout << "The product of the two numbers entered is :" << prod;
	return 0; 
}
