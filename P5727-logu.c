#include <stdio.h>
int main()
{
	int n, i, arr[200] = { 1 };
	scanf("%d", &n);
	for (i = 0; n != 1; i++)
	{
		if (n % 2 == 0)
		{
			arr[i] = n;
			n /= 2;
		}
		else
		{
			arr[i] = n;
			n = 3 * n + 1;
		}
	}
	arr[i] = n;
	for (; i >= 0; i--)
		printf("%d ", arr[i]);
	return 0;
}
