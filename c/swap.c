#include<stdio.h>
int main(){
    printf("enter two number\n");
    int a,b;
    scanf("%d %d",&a,&b);
    a=a+b;
    b= a-b;
    a = a-b;
    printf("%d, %d",a,b);
    return 0;
}