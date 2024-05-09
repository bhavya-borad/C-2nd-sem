#include <stdio.h>
int main()
{
    int m, n;
    printf("enter no. of columns and rows\n");
    scanf("%d %d", &m, &n);
    int arr[m][n], brr[n][m];
    printf("enter elements\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}