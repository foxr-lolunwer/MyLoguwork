#include <stdio.h>
int main()
{
	int a, b[10] = { 0 };
	int n, x;
	scanf("%d%d", &n, &x);
	int c, d;
	for (int i = 1; i <= n; i++)
	{
		d = i;
		while (1)
		{

			c = d % 10;
			d /= 10;
			b[c]++;
			if (d == 0)
				break;
		}
	}
	printf("%d", b[x]);
	return 0;
}
