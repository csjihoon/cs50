#include <stdio.h>


int prime(int number);


int main(void)
{
	int min = 1;
	int max = 200;
	for (int i = min; i <= max; i++)
	{
		if (prime(i) == 1)
		{
			printf("%d\n", i);
		}
	}
}

int prime(int number)
{
	if (number == 0 || number == 1)
	{
		return 0;
	}
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
