#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	double payRate, grossIncome, netIncome, schoolAmount, bondsAmount;
	double clothesAmount, parentsBondsAmount, hoursWorked, weekJob;

	const double TAX_RATE = 0.14;
	const double CLOTHES_PERCENTAGE_OF_INCOME = 0.10;
	const double SCHOOL_PERCENTAGE_OF_INCOME = 0.01;
	const double SAVINGS_BONDS_PERCENTAGE_OF_INCOME = 0.25;
	const double PARENTS_CONTRIBUTION_AMOUNT = 0.50;

	cout << "Enter number of Weeks in the job "; 
	cin >>  weekJob;

	cout << "Enter number of hours worked each week ";
	cin >> hoursWorked;

	cout << "Enter payrate for an hour ";
	cin >> payRate;

	grossIncome = weekJob * hoursWorked * payRate;
	netIncome = grossIncome * TAX_RATE;
	clothesAmount = netIncome * CLOTHES_PERCENTAGE_OF_INCOME;
	schoolAmount = netIncome * SCHOOL_PERCENTAGE_OF_INCOME;
	bondsAmount = netIncome * SAVINGS_BONDS_PERCENTAGE_OF_INCOME;
	parentsBondsAmount = bondsAmount * PARENTS_CONTRIBUTION_AMOUNT;

	cout << fixed <<showpoint << setprecision(2);

	cout << "Gross Income: $" << grossIncome << endl;
	cout << "Net Income:$" << netIncome << endl;
	cout << "Clothes and Accessories: $" << clothesAmount << endl;
	cout << "School Supplies: $" << schoolAmount << endl;
	cout << "Savings Bonds: $" << bondsAmount << endl;
	cout << "Parents Bonds Contribution: $" << parentsBondsAmount << endl;

	_getch();
	return 0;
}



