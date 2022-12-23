#include <stdio.h>
int main()
{
	int i, j, n = 0, l, arr[1000] = { 0 }, sum = 0, x=0;
	scanf("%d", &l);
	for (i = 2;; i++)
	{
		if (sum > l)
		{
			n--;
			break;
		}
		x = 0;
		for (j = 2;j<=i; j++)
		{
			if (i % j == 0)
			{
				x++;
			}
			if(x==1&&j==i)
			{
				arr[n] = i;
				n++;
				sum += i;
			}
		}
	}
	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);
	printf("%d", n);
	return 0;
}
