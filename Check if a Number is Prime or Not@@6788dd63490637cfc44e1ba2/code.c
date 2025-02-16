#include <stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        if(n%a==0){
            b+=1;
        }
        if(b==2){
            printf("Prime\n");
        }
        else{
            printf("Not Prime\n");
        }
    }
    return 0;
    
}

