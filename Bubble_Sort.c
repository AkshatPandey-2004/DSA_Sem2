#include<stdio.h>
int main()
{
    int n,i=0,temp=0,move=0,j=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the value in the array: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                move=move+1;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("\n array: %d",arr[i]);
    }
    printf("\n outcome: %d",move);
    return 0;
    printf("\n%d",arr[i]);
}
