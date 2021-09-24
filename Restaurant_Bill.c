//Computes the tax and tip on a restaurant bill
//Accepts the tax and tip both as percentages from the command line.
//Display the meal cost, tax amount, tip amount, and total bill 

// Program computes the tax and tip amount.
#include <iostream>
using namespace std;

int main()
{
	double MealCost = 44.50,
		   Tax		= MealCost * .0675,
		   Tip 		= (MealCost + Tax) * .15,
		   TBill	= MealCost + Tax + Tip;

	cout << "Meal cost = $" << MealCost << endl;
	cout << "Tax amount = $" << Tax << endl;
	cout << "Tip amount = $" << Tip << endl;
	cout << "Total bill = $" << TBill << endl;
	return 0;
}
