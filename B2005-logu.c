#include <stdio.h>
int main()
{
	char a;
	scanf("%c", &a);
	int i, k;
	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 2 - i; k++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * i + 1; k++)
		{
			printf("%c", a);
		}
		printf("\n");
	}
	return 0;
}
