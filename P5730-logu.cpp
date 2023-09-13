#include <stdio.h>

void print_num(int num, int line) {
	switch (line)
	{
	case 1:
		if (num != 1 && num != 4)
			printf("XXX");
		else if (num == 1)
			printf("..X");
		else
			printf("X.X");
		break;
	case 2:
		if (num == 0 || num == 4 || num == 8 || num == 9)
			printf("X.X");
		else if (num == 1 || num == 2 || num == 3 || num == 7)
			printf("..X");
		else
			printf("X..");
		break;
	case 3:
		if (num == 0)
			printf("X.X");
		else if (num == 1 || num == 7)
			printf("..X");
		else
			printf("XXX");
		break;
	case 4:
		if (num == 0 || num == 6 || num == 8)
			printf("X.X");
		else if (num == 2)
			printf("X..");
		else
			printf("..X");
		break;
	case 5:
		if (num == 1 || num == 4 || num == 7)
			printf("..X");
		else
			printf("XXX");
		break;
	default:
		break;
	}
}

int main()
{ 
	int n;
	char num[101];
	scanf("%d%s", &n, &num);
	for (int line = 1; line < 6; line++)
	{
		for (int i = 0; i < n; i++)
		{
			print_num(int(num[i] - 48), line);
			if (i != n - 1)
				printf(".");
		}
		printf("\n");
	}
	return 0;
}
