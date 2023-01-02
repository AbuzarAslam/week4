#include<iostream>
using namespace std;
void isEven(int number);
main()
{
	int number;
	while(true)
	{
        cout << "enter number....";
	cin >> number;
	isEven(number);
	}


}
void isEven(int number)
 {
   if (number%2==0)
    {
    cout << "number is even...." << endl;
    }
   if (number%2!=0)
   {
    cout << "number is odd" << endl;
    } 
}