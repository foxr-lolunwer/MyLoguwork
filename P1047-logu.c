#include <stdio.h>
int main()
{
	int arr[10001] = { 0 }, a[100], b[100], l, m, i, j;
	scanf("%d%d", &l, &m);
	for (i = 0; i < m; i++)
		scanf("%d%d", &a[i], &b[i]);
	for (j = 0; j < m; j++)
		for (i = a[j]; i <= b[j]; i++)
			arr[i] = 1;
	j = 0;
	for (i = 0; i <= l; i++)
	{
		if (arr[i] == 0)
			j++;
	}
	printf("%d", j);
	return 0;
}
