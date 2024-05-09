#include<stdio.h>
int main(){
    int arr[8];
    int x =12;
    printf("enter 8 numbers");
    for(int i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0; i<8;i++){
        for (int j =i+1;j<8;j++){
            for(int k = j+1;k<8;k++){
                if((arr[i]+arr[j]+arr[k])==x){
                count = count +1;
                printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
            }

            }
            
        }
    }
    printf("count is %d",count);
    return 0;
}