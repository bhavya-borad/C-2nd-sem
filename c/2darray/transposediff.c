#include <stdio.h>

int main()
{
    int m,a;
    printf("enter no. of columns or rows\n");
    scanf("%d", &m);
    int arr[m][m];
    printf("enter elements\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < m; j++)
        {
            a = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = a;
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m/2; j++)
        {
            a = arr[i][j];
            arr[i][j] = arr[i][m-j-1];
            arr[i][m-j-1] = a;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}