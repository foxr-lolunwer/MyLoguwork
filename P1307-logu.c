#include <stdio.h>
int main()
{
	int N,a,i=0,j=-1,k=0,x;
	int arr[10]={0};
	scanf("%d", &N);
	if (N == 0)
		printf("0");
	else
	{ while (N)
	{
		if (N < 0)
		{
			N = -N;
			k = 1;
		}
		a = N % 10;
		N /= 10;
		arr[i] = a;
		i++;
	}
	x = i;
	if (arr[0] == 0)
	{
		for (i = 0;; i++)
		{
			j++;
			if (arr[i] != 0)
			break;
		}
		if (k == 1)
		{
			arr[j] = -arr[j];
		}
	}
	else
	{
		j = 0;
		if (k == 1)
		{
			arr[0] = -arr[0];
		}
	}
	for (; j < x; j++)
		printf("%d", arr[j]); }
	return 0;
}
