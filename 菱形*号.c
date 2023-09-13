#include <stdio.h>
int main()
{
	int i, k,j;
	for (i = 0; i < 5; i++)
	{
		for (k = 0; k < 2 - i || k < i - 2; k++)
		{
			printf(" ");
		}
		if (i <= 2)
		{
			for (j = 0; j < 2 * i + 1; j++)
				printf("*");
		}
		else
		{
			for (j=10;j>2*i+1;j--)
				printf("*");
		}
		printf("\n");
	}
	return 0;
}
