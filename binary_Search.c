#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n],i,j,k;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Sorting of Array");
    int temp;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n Sorted array: ");
    for(i=0;i<n;i++){
        printf("\n %d",arr[i]);
    }

    int ser,first,last,middle;
    printf("\nEnter element search: ");
    scanf("%d",&ser);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    i=1;
    while(first<=last){
        if(arr[middle]<ser){
            first=middle+1;
        }
        else if(arr[middle]==ser){
            printf("%d Found at location %d",ser,middle+1);
            break; 
        }
        else{
            last=middle+1;
        }
    }
    return 0;
}
