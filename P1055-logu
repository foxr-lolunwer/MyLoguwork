#include <stdio.h>
int main()
{
	char arr[14],last;
	scanf("%s", arr);
	int a,b=1,sum=0;
	for (int i = 0; i < 11; i++)
	{
		if (i != 1 && i != 5)
		{
			a = arr[i]-48;
			a *= b;
			sum += a;
			b++;
		}
	}
	b = sum % 11;
	if (b == 10)
		last = 'X';
	else
		last = b+48;
	if (last == arr[12])
		printf("Right");
	else
	{
		arr[12] = last;
		printf("%s", arr);
	}
}
