#include <stdio.h>
int main()
{
	int a, b, c, d, i;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)
	{
		d = a;
		a = b;
		b = d;
	}
	if (a > c)
	{
		d = a;
		a = c;
		c = d;
	}
	if (b > c)
	{
		d = b;
		b = c;
		c = d;
	}
	char arr[4],A='A', B = 'B', C = 'C';
	scanf("%s", arr);
	
	for (i = 0; i < 2; i++)
	{
		if (A == arr[i])
			printf("%d ", a);
		if (B == arr[i])
			printf("%d ", b);
		if (C == arr[i])
			printf("%d ", c);
	}
	if (A == arr[i])
		printf("%d", a);
	if (B == arr[i])
		printf("%d", b);
	if (C == arr[i])
		printf("%d", c);
}
