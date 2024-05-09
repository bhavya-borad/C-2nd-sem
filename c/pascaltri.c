#include<stdio.h>
int fact(int a){
    int f=1;
    for(int i = 1;i<=a;i++){
        f =f *i;
    }
    return f;
}
int com(int n, int r){
    int co = fact(n)/(fact(r)*fact(n-r));
    return co;
}
int per(int n, int r){
    int pu = fact(n)/fact(r);
    return pu;
}
int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int j =0;j<=i;j++){
            int v = com(i,j);
            printf("%d ",v);
        }
        printf("\n");
    }
    return 0;
}