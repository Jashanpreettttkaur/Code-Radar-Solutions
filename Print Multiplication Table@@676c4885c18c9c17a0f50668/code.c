#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int p=1;
    for(int i=1;i<=n;i++){
        p=n*i;
        printf("%d * %d = %d",n,i,p);
        
    }
    return 0;
    
}