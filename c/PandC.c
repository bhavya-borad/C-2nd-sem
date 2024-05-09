#include<stdio.h>
int fact(int a){
    int f=1;
    for(int i = 1;i<=a;i++){
        f =f *i;
    }
    return f;
}
int combination(int n, int r){
    int co = fact(n)/(fact(r)*fact(n-r));
    return co;
}
int permutation(int n, int r){
    int pu = fact(n)/fact(r);
    return pu;
}
int main(){
    int n,r,ans;
    int ch;
    printf("enter n & r\n");
    scanf("%d %d",&n,&r);
    printf("enter 0 for permutation and 1 for combination\n");
    scanf("%d",&ch);
    if(ch==0)
        ans = permutation(n,r);
    else if(ch ==1)
        ans = combination(n,r);    
    printf("your answer is %d",ans);
    return 0;
}