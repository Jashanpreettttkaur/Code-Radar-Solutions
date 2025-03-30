#include<stdio.h>
void bubbblesort(int arr[],int n){
    for(int i =0;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]) {
                int tem =a[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return;
}
void printarry(int arr[],int n){
    for(int i=0;i<=n;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=o.i<n;i++){
        scanf("%d",arr[i]);
    }
    bubblesort(arr,n);
    printarry(arr,n);
    return 0;
}