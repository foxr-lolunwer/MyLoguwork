#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[1000][8] = { {0} };
	int out[8] = { 0 };
	for (int i = 0; i < n + 1; i++)
	{
		arr[i][7] = 0;
		for (int j = 0; j < 7; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			for (int k = 0; k < 7; k++)
			{
				if (arr[0][i] == arr[j][k])
				{
					arr[j][7]++;
				}
			}
		}
	}
	for (int i = 1; i < n + 1; i++)
	{
		out[arr[i][7]]++;
	}
	for (int i = 7; i > 0; i--)
	{
		printf("%d ", out[i]);
	}
	return 0;

}
