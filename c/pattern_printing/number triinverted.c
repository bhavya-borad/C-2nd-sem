#include<stdio.h>
int main(){
    int a;
    printf("enter length: ");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = a-i+1; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    return 0;
    
}