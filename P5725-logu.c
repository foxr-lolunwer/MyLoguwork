#include <stdio.h>
int main()
{
	int n, i, j, k, m = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%.2d", m);
			m++;
		}
		printf("\n");
	}
	m = 1;
	printf("\n");
	for (i = 0; i < n; i++)
	{
		for (j=n-i; j > 1; j--)
			printf("  ");
		for (k = 0; k < i + 1; k++)
		{
			printf("%.2d", m);
			m++;
		}
		printf("\n");
	}
	return 0;
}
