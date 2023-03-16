#include <stdio.h>


float half(float bill, float tax_percent, float tip_percent);


int main(void)
{
	float bill_amount = 23.50;
	float tax_percent = 7;
	float tip_percent = 15;
	float owed = half(bill_amount, tax_percent, tip_percent);
	printf("You will owe $%.2f each!\n", owed);
}


float half(float bill, float tax_percent, float tip_percent)
{
	tax_percent = tax_percent / 100.0;
	tip_percent = tip_percent / 100.0;
	float tax = bill * tax_percent;
	bill = bill + tax;
	float tip = bill * tip_percent;
	bill = bill + tip;
	return bill / 2.0;
}
