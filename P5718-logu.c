#include <stdio.h>
int main()
{
    int arr[101]={0};
    int i,j,n,t;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        for(j=0;j<n;j++)
        if (arr[i] < arr[j])
        {
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    printf("%d", arr[0]);
    return 0;
}
