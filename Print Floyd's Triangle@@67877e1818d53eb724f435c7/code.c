#include<stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    for(int i=1;i<=s;i++){
        int c=1;
        for(int j=1;j<=i;j++){
            c=c+1;
            printf("%d",c);

        }
        printf("\n");
    }
    return 0;

}