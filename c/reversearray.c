#include<stdio.h>
int main(){
    int n=10;
    // printf("how many elements");
    // scanf("%d",&n);
    int arr[10];
    for(int i = 0;i<n;i++){
    printf("enter %d th element\n",i+1);
    scanf("%d",&arr[i]);
    }
    for(int i=0; i < n;i++){
        if(arr[i]<35)
        printf("%d\t",i);
    }
    //printf("%d",arr[]);
    return 0;
}