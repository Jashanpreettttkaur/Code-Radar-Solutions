#include<stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    int c=1;
    for(int i=1;i<=s;i++){
        for(int j=1;j<=i;j++){
            
            printf("%d",c);

        }
        c=c+1;
        printf("\n");
    }
    return 0;

}