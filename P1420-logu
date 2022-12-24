#include <stdio.h>
int main()
{
	int n, arr[10000] = { 0 };
	scanf("%d", &n);
	int i;
	int m=1, max=1;
	if (n != 0 && n != 1)
	{
		for (i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
			if (i > 0)
			{
				if (arr[i] - arr[i - 1] == 1)
					m++;
				if (arr[i] - arr[i - 1] != 1 || i == n-1)
				{
					if (m > max)
					{
						max = m;
					}
					m = 1;
				}
			}
		}
		printf("%d", max);
	}
	else
		printf("0");
	return 0;
}
