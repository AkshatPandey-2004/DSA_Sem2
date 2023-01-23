//INSERTION AND DELETION
#include<stdio.h>
int main()
{
    int size,pos,i,num;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int a[size];
    printf("Now enter the elements in the array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of the array are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("Now performing the insertion of elements:\n");
    printf("Enter the position at which yoy want to insert the element");
    scanf("%d",&pos);
    printf("Enter the element that you want to insert:");
    scanf("%d",&num);
    for(i=size-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    printf("New array afte the insertion is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nNow here we see the deletion of the element");
    printf("\nEnter the position from which you want to delete the element:");
    scanf("%d",&pos);
    for(i=pos-1;i<size-1;i++){
        a[i]=a[i+1];
    }
    size--;
    printf("The new array after deletion of elemet is :\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    }
