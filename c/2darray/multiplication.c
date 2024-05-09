#include <stdio.h>
int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    int b[2][3] = {7, 8, 9, 1, 3, 5};
    int c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 2; k++)           
            {
                c[i][j] = a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}