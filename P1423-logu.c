#include <stdio.h>
int main()
{
	int a;
	double  b = 2, s, sum=2;
	scanf("%lf", &s);
	for (a = 1;; a++)
	{
		if (sum >= s)
		{
			printf("%d", a);
			break;
		}
		b *= 0.98;
		sum += b;
	}
	return 0;
}
