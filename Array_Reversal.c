#include<stdio.h>
int main(){
    int n;
    printf("Enter The Size of Array: ");
    scanf("%d",&n);
    int arr[n],i,j,temp;
    for(i=0;i<n;i++){
        printf("\nEnter Element in Array: ");
        scanf("%d",&arr[i]);
    }
    printf("\nReversing The Array: \n");
    for(i=0;i<n/2;i++){
        j=(n-1)-i;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(i=0;i<n;i++){
        printf("\n%d",arr[i]);
    }
}
