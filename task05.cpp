#include<iostream>
using namespace std;
void calculateBill(string day,int amount);
main()
{
	string day;
	int amount;
	cout << "Enter day...";
	cin >> day;
	cout << "Enter your amount....";
	cin >> amount;
	calculateBill(day,amount);
}
void calculateBill(string day,int amount)
{
	if(day == "sunday")
	{
	bill = amount-(amount*10/100);
	cout << "your bill is..." << endl;
	}
	if (day != "sunday")
        cout << "your bill is...." << amount << endl; 
}