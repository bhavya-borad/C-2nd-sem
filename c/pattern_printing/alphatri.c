#include<stdio.h>
int main(){
    int n;
    printf("enter length");
    scanf("%d",&n);
    for (int i = 65; i < 65+n; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            if(i%2!=0)
            printf("%c",j);
            else
            printf("%d",j-64);
        }
        printf("\n");
    }
    return 0;
}