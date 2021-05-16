// Module4_Ch7_Ex18_WarstlerC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double hoursWork = 0.0;
	double wage = 0.0;
	double basePay = 0.0;
	double overtimeHours = 0.0;
	double overtimePay = 0.0;
	double overtimeExtra = 0.0;
	double totalPay = 0.0;

	cout << "Please enter the amount of hours worked: ";
	cin >> hoursWork;
	cout << "Please enter your hourly wage: ";
	cin >> wage;

	if (hoursWork > 40)
	{
		//Gets overtime hours, pay, and extra
		overtimeHours = hoursWork - 40;
		overtimePay = wage * 1.5;
		overtimeExtra = overtimeHours * overtimePay;

		//Calculates total pay
		basePay = (hoursWork - overtimeHours) * wage;
		totalPay = overtimeExtra + basePay;
	}
	//End if
	else
	{
		totalPay = wage * hoursWork;
	}
	//End else

	cout << "Your weekly gross pay is: $" << totalPay << endl;

}
