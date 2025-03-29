#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nsp =n/2;
    int nst =1
    int md=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        if(i<md){
            nsp--;
            nsp++;
        }else{
            nsp++;
            nst--;
        }
        printf("\n");
    }
    return 0;
}