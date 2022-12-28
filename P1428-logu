#include <stdio.h>
int main()
{
	int n, arr[100];
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	int j,m=0;
	int mrr[100]={0};
	for (i = 1; i < n; i++)
	{
		m = 0;
		for (j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
				m++;
			mrr[i] = m;
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", mrr[i]);
	return 0;
}
