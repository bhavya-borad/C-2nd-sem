#include<stdio.h>
int main(){
    int a,b;
    printf("enter length: ");
    scanf("%d",&a);
    printf("enter a breath: ");
    scanf("%d",&b);
    for (int i = 0; i < b; i++)
    {
        for (int i = 1; i <= a; i++)
        {
            printf("%d",i);
        }
        printf("\n");
        
    }
    return 0;
    
}