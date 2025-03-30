#include<stdio.h>
int main(){
    int s;
    scanf("%d",&s);
    int c=0;
    for(int i=1;i<=s;i++){
        c=i;
        for(int j=1;j<=i;j++){
            c=c+1;
            printf("%d",c);

        }
        printf("\n");
    }
    return 0;

}