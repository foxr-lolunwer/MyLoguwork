#include <stdio.h>
int main()
{
	int n, a, b, m[3], i;
	scanf("%d", &n);
	for (i = 0; i < 3; i++)
	{
		scanf("%d%d", &a, &b);
		if (n % a != 0)
			m[i] = n / a + 1;
		else
			m[i] = n / a;
		m[i] *= b;
	}
	if (m[0] > m[1])
	{
		n = m[1];
		m[1] = m[0];
		m[0] = n;
	}
	if (m[0] > m[2])
	{
		n = m[2];
		m[2] = m[0];
		m[0] = n;
	}
	printf("%d", m[0]);
	return 0;
}
