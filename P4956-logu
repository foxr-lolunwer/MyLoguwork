#include <stdio.h>
int main()
{
	int n, x, k = 0, m = 0,xm;
	scanf("%d", &n);
	n /= 52;
	for (k = 1;; k++)
	{
		if (700 + 21 * k >= n)
		{
			for (x = 1; x <= 100; x++)
			{
				if (7 * x + 21 * k == n)
				{
					xm = x;
					printf("%d\n%d", xm, k);
					return 0;
				}
				if (7 * x + 21 * k > n)
				{
					break;
				}
			}
		}
	}
	return 0;
}
