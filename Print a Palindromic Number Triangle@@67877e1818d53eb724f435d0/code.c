#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%C",k+64);
        }int a=i;
        for(int l=i;l>1;l--){
           --a;
            printf("%C",a+64);
            
            
        }
        printf("\n");
    }
    return 0;
}