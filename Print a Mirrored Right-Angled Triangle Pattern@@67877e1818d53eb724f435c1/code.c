#include<stdio.h>
int main(){
    int n;
    int nsp=n-1;
    int nst=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("* ");
        }
        nsp--;
        nst++;
        printf("\n");
    }
    return 0;
    }