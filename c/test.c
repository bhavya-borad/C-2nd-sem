#include<stdio.h>
int mani(){
    int a;
    printf("enter a number\t");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(i==j||i==a-j||j==a-i){
                printf("@");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}