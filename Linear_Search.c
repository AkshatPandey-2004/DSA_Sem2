#include<stdio.h>
int main(){
    int size,i,search,count=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
   printf("Enter the elements in the array: ");
   for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
   }
   printf("\nENTER THE ELEMENT YOU WANT TO SEARCH:");
   scanf("%d",&search);
   for(i=0;i<size;i++){
    if(search==arr[i]){
        printf("\nThe element found at index %d",i);
        }
    }
    return 0;
}
