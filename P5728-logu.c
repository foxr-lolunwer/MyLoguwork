#include <stdio.h>
#include <math.h>
int main()
{
	int n, a[1000], b[1000], c[1000], d[1000];
	scanf("%d", &n);
	int i, k, m, sum = 0;
	int x, y, z, v;
	for (i = 0; i < n; i++)
	{
		m = 0;
		scanf("%d%d%d", &a[i], &b[i], &c[i]);
		d[i] = a[i] + b[i] + c[i];
		for (k = 0; k < i; k++)
		{
			x = a[i] - a[k];
			y = b[i] - b[k];
			z = c[i] - c[k];
			v = d[i] - d[k];
			if (abs(x) <= 5 && abs(y) <= 5 && abs(z) <= 5 && abs(v) <= 10)
			{
				m++;
			}
		}
		sum += m;
	}
	printf("%d", sum);
	return 0;
}
