#include<stdio.h>
int main(){
    int n;
    printf("enter a odd number\t");
    scanf("%d",&n);
    for(float i=1;i<=n;i++){
        for(float j=1;j<=n;j++){
            if((n+1)/i==2)
            printf("*");
            else if((n+1)/j==2)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}