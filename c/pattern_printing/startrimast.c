#include<stdio.h>
int main(){
    int a;
    printf("enter length: ");
    scanf("%d",&a);
    int j;
    for (int i = 1; i <= a; i++)
    {
        for (j = 1; j <=a-i; j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        
        printf("\n");
    }
    return 0;
    
}