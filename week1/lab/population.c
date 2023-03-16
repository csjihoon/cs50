#include <stdio.h>


int calc_born(int population);
int calc_dead(int population);
int calc_years(int start_size, int end_size);


int main(void)
{
	int start_size = 100;
	int end_size = 1000000;
	int born = calc_dead(start_size);
	int years = calc_years(start_size, end_size);
	printf("Years: %d\n", years);
}


int calc_born(int population)
{
	return population / 3;
}


int calc_dead(int population)
{
	return population / 4;
}


int calc_years(int start_size, int end_size)
{
	int years = 0;
	while (start_size < end_size)
	{
		int born = calc_born(start_size);
		int dead = calc_dead(start_size);
		start_size = start_size + born - dead;
		years++;
	}
	return years;
}
