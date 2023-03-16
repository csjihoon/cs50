#include <stdio.h>


int valid(long card);


int main(void)
{
	long card = 2221000000000009;
	printf("Number: %ld\n", card);
	if (valid(card) == 0)
	{
		printf("INVALID\n");
	}
	else{
		printf("VALID\n");
	}

}


int valid(long card)
{
	int sum = 0;
	while (card != 0)
	{
		long target = card % 100;
		int other = target % 10;
		target = target / 10;
		card = card / 100;
		target = target * 2;
		if (target >= 10)
		{
			int quotient = target / 10;
			int remainder = target % 10;
			target = quotient + remainder;
		}
		sum = sum + target + other;
	}
	if (sum % 10 == 0)
	{
		return 1;
	}
	return 0;
}
