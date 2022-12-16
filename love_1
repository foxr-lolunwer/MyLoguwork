#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
void customdraw(int size,int colour,char eDraw)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colour);
    int n = size;
    int m = 0, k = 1;
    int g = 7 + 6 * size;
    for (int i = 1; i <= 5 * (size + 1); i++)
    {
        for (int y = 1; y < 2 * n; y++)
            printf(" ");
        if (i <= n + 1)
        {
            for (int j = 1; j <= g; j++)
            {
                if (j >= n + 2 - m && j <= 2 * n + 3 + m || j >= 4 * n + 5 - m && j <= 5 * n + 6 + m)
                    printf("%c",eDraw);
                else
                    printf(" ");
            }
            m++;
            printf("\n");
        }
        if (i > n + 1 && i <= 2 * n + 2)
        {
            for (int j = 1; j <= g; j++)
                printf("%c", eDraw);
            printf("\n");
        }
        if (i > 2 * n + 2 && i <= 5 * n + 5)
        {
            for (int j = 0; j < g; j++)
            {
                if (j >= k && j < g - k)
                    printf("%c", eDraw);
                else
                    printf(" ");
            }
            k++;
            printf("\n");
        }
    }
}
int main()
{
    int size;
    int colour;
    char eDraw;
    printf("----------\n用什么画？\n");
    scanf("%c", &eDraw);
    printf("----------\n请输入尺寸大小(0-3效果最好)\n");
    scanf("%d", &size);
    printf("----------\n输入颜色(十六进制)\n");
    scanf("%x", &colour);
    printf("----------\n结果如下\n\n\n");
    customdraw(size, colour,eDraw);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,0x7 );
    return 0;
}
