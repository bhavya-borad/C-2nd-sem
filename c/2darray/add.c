#include<stdio.h>
int main(){
    int n,m;
    printf("enter no of columns and rows\t");
    scanf("%d %d",&m,&n);
    int a[m][n];
    int b[m][n];
    printf("enter your elements of first matrix\n");
    
    for(int i = 0; i < m; i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter your elements of second matrix\n");
    
    for(int i = 0; i < m; i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    for(int i = 0; i < m; i++){
        for(int j = 0;j<n;j++){
            a[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}