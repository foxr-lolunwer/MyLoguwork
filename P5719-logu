#include <stdio.h>
int main()
{
	int a[10000] = { 0 }, b[10000] = { 0 };
	int i, n, k, j = 0, l = 0;
	scanf("%d%d", &n,&k);
	for (i = 1; i <= n; i++)
	{
		if (i % k == 0)
		{
			a[j] = i;
			j++;
		}
		else
		{
			b[l] = i;
			l++;
		}
	}
	double sum1=0, sum2=0;
	for (i = 0; i < j; i++)
		sum1 += a[i];
	for (i = 0; i < l; i++)
		sum2 += b[i];
	sum1 /= j;
	sum2 /= l;
	printf("%.1f %.1f", sum1, sum2);
	return 0;
}
