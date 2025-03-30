#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=11;i--){
        for(int j=1;j<=i;j++){
            printf("%C",j+64);
        }
        printf("\n");
    }
    return 0;
}