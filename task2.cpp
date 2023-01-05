#include<iostream>
using namespace std;
void Sum(int number1,int number2);
main () {
	 int number1;
	 int number2;
	 
	 cout << "Enter 1st number....";
	 cin >> number1;
	 cout << "Enter 2nd number....";
	 cin >> number2;
         Sum(number1,number2);
}
void Sum(int number1,int number2)
 {
 int sum;
 sum = number1+number2;
 cout << " sum : " << sum;
 }