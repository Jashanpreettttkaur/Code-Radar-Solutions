#include <stdio.h>
int main(){
    int num,n;
    scanf("%D %D",&num,&n);
    num=num|(1<<n);
    printf("%d\n",num);
    return 0;
}