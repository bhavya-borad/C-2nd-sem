#include<stdio.h>
int main(){
    int arr[5];
    printf("enter 5 numbers\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max)
        max = arr[i];
    }
    int smax = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>smax && arr[i]!=max)
        smax = arr[i];
    }
    printf("second largest is %d",smax);
    
    return 0;
}