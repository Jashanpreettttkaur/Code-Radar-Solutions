// #include <stdio.h>
int bubblesort(int arr[],int n){
    for(int i =0;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]) {
                int tem =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tem;
            }
        }
    }
    return;
}
int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return;
}
// int main() {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",arr[i]);
//     }
//     bubblesort(arr,n);
//     printarry(arr,n);
//     return 0;
// }