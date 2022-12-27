#include<stdio.h>
int main()
{
    int arr[1000] = { 0 };
	int n, av=0,i,j,k;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;
			}
		}
	for (i = 1; i < n - 1; i++)
		av = av + arr[i];
	double ave;
	ave = av * 1.0 / (n - 2);
	printf("%.2lf", ave);
    return 0;
}
