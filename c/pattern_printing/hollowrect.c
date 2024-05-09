#include<stdio.h>
int main(){
    int l,b;
    printf("enter length and breath for hollow rectangle");
    scanf("%d %d",&l,&b);
    for(int i=1;i<=b;i++){
        for(int j=1;j<=l;j++){
            if(i==1||j==1||i==b||j==l)
            printf("O");
            else
            printf(" ");
        
        }
        printf("\n");
    }
    return 0;
}