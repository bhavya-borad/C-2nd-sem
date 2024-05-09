#include <stdio.h>
int main()
{
    int n, r;
    printf("how many elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("how many rotations: ");
    scanf("%d", &r);
    for (int k = 0; k < r; k++)
    {
        int temp = arr[0];
        for (int i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}