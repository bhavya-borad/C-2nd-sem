#include<stdio.h>
int main(){
    int n;
    printf("enter n:\t");
    scanf("%d",&n);
    int a;
    for (int i = 1; i <= n; i++)
    {
        for(int k = 1;k<=n-i;k++){
            printf(" ");
        }       
        for(int j = 1;j<=i;j++){
            printf("%d",j);    
        }
        for(int k = i-1;k>=1;k--){
                printf("%d",k);
            }
    printf("\n");
    }
    return 0;
}