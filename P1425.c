#include <stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int hour, minute;
	hour = c - a;
	minute = d - b;
	if (minute < 0)
	{
		hour--;
		minute += 60;
	}
	printf("%d %d", hour, minute);
	return 0;
}
