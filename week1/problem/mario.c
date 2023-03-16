#include <stdio.h>


void draw_pyramid(int height);


int main(void)
{
	int height = 4;
	draw_pyramid(height);
}


void draw_pyramid(int height)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < height + 1; j++)
		{
			if (height - j <= i)
			{
				printf("#");
			}
			else
			{
				printf(" ");
			}
		}
		printf("  ");
		for (int j = 0; j < i+1; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}
