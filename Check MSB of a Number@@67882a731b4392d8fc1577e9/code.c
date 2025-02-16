#include <stdio.h>

int main(){
    int a,msb;
    scanf("%d",&a);
    msb=(a>>(sizeof(a)*8-1))&1;
    if(msb==1)
       printf("set");
    else
       printf("Not set");
    return 0;
}