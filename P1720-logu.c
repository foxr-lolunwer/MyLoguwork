#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	double fn;
	double m = sqrt(5), a = (1 + m) / 2, b = (1 - m) / 2;
	double a1 = a, b1 = b;
	for (int i = 1; i < n; i++)
	{
		a1 *= a;
		b1 *= b;
	}
	fn = (a1 - b1) / m;
	if (n != 0)
		printf("%.2f", fn);
	else
		printf("0.00");
	return 0;
}
