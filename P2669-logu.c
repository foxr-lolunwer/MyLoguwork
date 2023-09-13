#include <stdio.h>
int main()
{
        int k, i, j;
        scanf("%d", &k);
        int sum = 0, num = 0;
        for (i = 1;; i++)
        {
            for (j = 1; j <= i; j++)
            {
                sum += i;
                num++;
                if (num == k)
                {
                    printf("%d", sum);
                    return 0;
                }

            }
        }
        return 0;
}
