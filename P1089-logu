#include <stdio.h>
int main()
{
	int x, k = 0, m=0;
	for (int i = 0; i < 12; i++)
	{
		scanf("%d", &x);
		k += 300;
		if (k - x >= 0)
		{
			k -= x;
			m += 100 * (k / 100);
			k -= 100 * (k / 100);
		}
		else
		{
			printf("-%d", ++i);
			return 0;
		}
	}
	printf("%.0f", 1.2*m+k);
	return 0;
}
