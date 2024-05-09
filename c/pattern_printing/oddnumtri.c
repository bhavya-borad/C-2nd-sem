#include<stdio.h>
int main(){
    int a;
    printf("enter length: ");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= 2*i; j++)
        {
            if(j%2!=0)
            printf("%d",j);
        }
        printf("\n");
        
    }
    return 0;
    
}