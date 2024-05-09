#include<stdio.h>
int main(){
    int a;
    printf("enter no. of ements\n");
    scanf("%d",&a);
    int arr[a];
    int brr[a];
    printf("enter %d elements\n",a);
    for(int i =0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        
        brr[a-1-i] = arr[i];
        continue;
    
    }
    for(int i = 0; i < a;i++){
        printf("%d",brr[i]);
    }
    return 0;
}