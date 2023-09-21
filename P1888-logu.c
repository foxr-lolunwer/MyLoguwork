int main()
{
	int a, b, c, d,a1,b1,c1;
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
	a1 = a;
	b1 = b;
	c1 = c;
	while (a)
	{
		int w = c % a;
		c = a;
		a = w;
	}
	a1 = a1 / c;
	c1 = c1 / c;
	printf("%d/%d", a1, c1);
	return 0;
}
