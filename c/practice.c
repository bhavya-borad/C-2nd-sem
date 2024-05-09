#include <stdio.h>

int main()
{
    int n,a=1,b=1,sum;
    printf("enter a number for fibonacci series:\t");
    scanf("%d",&n);
    printf("%d\t",a);
    printf("%d\t",a);
    for (int i = 0; i <= n-2; i++)
    {
       sum = a + b;
       b = a; 
       a = sum;
       
       printf("%d\t",sum);
    }
    return 0;
}
