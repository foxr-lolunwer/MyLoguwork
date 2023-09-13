#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double e;
	int a, b, c;
	double d;
	scanf("%lf", &e);
	a = e / 100;
	b = (e - a * 100) / 10;
	c = (e - a * 100 - b * 10);
	d = (e - a * 100 - b * 10 - c) * 10;
	printf("%.0lf.%d%d%d", d, c, b, a);
	return 0;
}
