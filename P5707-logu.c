#include <stdio.h>
int main()
    {
        int s, v, h, m;
        scanf("%d %d", &s, &v);
        if (s % v != 0) m = s / v + 11;
        else m = s / v+10;
        if (m <= 8 * 60 )
        {
            for (h = 1; m >= 60; h++)
            {
                m -= 60;
            }
            if (m == 0) printf("%02d:50", 8 - h);
            else printf("%02d:%02d", 8 - h, 60 - m);
        }
        if (m > 8 * 60 && m <= 24 * 60) 
        {
            for (h = 1; m >= 60; h++) 
            {
                m -= 60;
            }
            if (m == 0) printf("%02d:50", 32 - h);
            else printf("%02d:%02d", 32 - h, 60 - m);        }
        return 0;
    }
