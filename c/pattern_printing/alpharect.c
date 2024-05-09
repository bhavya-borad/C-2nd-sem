#include<stdio.h>
int main(){
    int l,b;
    printf("enter l and b for alphabet rectangle:\t");
    scanf("%d %d",&l,&b);
    for (int i = 65; i < b+65; i++)
    {
        for (int j = 65; j < l+65; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}