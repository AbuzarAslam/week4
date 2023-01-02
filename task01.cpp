#include<iostream>
using namespace std;
void sum(int number1,int number2);
void product(int number1,int number2);
void subtract(int number1,int number2);
int main()
{
	int number1;
	int number2;
	char operation;
	while(true)
	{
	cout << " Enter 1st number...";
	cin >> number1;
	cout << " Enter 2nd number...";
	cin >> number2;
	cout << "enter operation(+,-,*)..";
	cin >> operation;
	if(operation =='+')
	{
	sum(number1,number2);
	}
	if(operation =='*')
	{
	product(number1,number2);
	}
	if(operation =='-')
	{
	subtract(number1,number2);
	}
	}	
}
void sum(int number1,int number2)
 {
  cout << "sum is....." << number1+number2<<endl;
 }
void product(int number1,int number2)
 {
 cout << "product is....." << number1*number2<<endl;
 }
void subtract(int number1,int number2)
 {
 cout << "subtract is....." << number1-number2<<endl;
 }
