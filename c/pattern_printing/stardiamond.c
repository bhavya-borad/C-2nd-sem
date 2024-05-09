#include<stdio.h>
int main(){
    int n;
    printf("enter n\t");
    scanf("%d",&n);
    for(int i = 1;i<=n/2+1;i++){
        for(int j = 1;j<=n/2+1-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=i;k++){
            printf("%d",k);
        }
        for(int k = i-1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    for(int i = 1;i<=n/2+1;i++){
        
        for(int j = 1; j<=i;j++){
            printf(" ");
        }
        for(int k =1;k<=n/2-i;k++){
            printf("%d",k);
        }
        for(int k = n/2+1-i;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}