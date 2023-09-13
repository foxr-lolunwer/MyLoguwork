#include <stdio.h>
int main()
{
	int i, h[10], k, c=0;
	for (i = 0; i < 10; i++)
		scanf("%d", &h[i]);
	scanf("%d", &k);
	k += 30;
	for (i = 0; i < 10; i++)
	{
		if (k >= h[i])
			c++;
	}
	printf("%d", c);
	return 0;
}
