#include<stdio.h>

int main(void)
{
	for (int i = 0; i < 4; i++)
	{
		printf("*\n");
		for (int j = 0; j <= (i+1); j++)
		{
			printf("*");
		}
		printf("\n");
	}

	fgetc(stdin);
	return 0;
}