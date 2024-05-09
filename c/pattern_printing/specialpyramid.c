#include<stdio.h>
int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int m = n-1;
    for (int i = 1; i <= 2*n-1; i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1;j<=n-i;j++){
            printf("%d",j);
        }
        for(int j = 1;j<=2*i-1;j++){
            printf(" ");
        }
        for(int j = n+i;j<=2*n-1;j++){
            printf("%d",j);
        }
    printf("\n");
    }
    return 0;
}