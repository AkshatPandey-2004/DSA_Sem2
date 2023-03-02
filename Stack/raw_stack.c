#include<stdio.h>
void main(){
    int max;
    int top=-1;
    printf("Enter The Size Of Stack: ");
    scanf("%d",&max);
    int arr[max],i,ch;
        printf("\n\t\tENTER YOUR CHOICE");
        printf("\nPress 1: To Push element in the stack");
        printf("\nPress 2: To Pop element in the stack");
        printf("\nPress 3: To Peep element in the stack");
        printf("\nPress 4: To Display element in the stack");
        printf("\nPress 5: EXIT\n");
    while(1){
        printf("\nYour Choice: ");
        scanf("%d",&ch);
        if(ch==1){
            if(top>=max-1){
                printf("ERROR:OVERFLOW\n");
                continue;
            }
            top++;
            printf("Enter the new element : ");
            scanf("%d",&arr[top]);
        }
        else if(ch==2){
            if(top<=0){
                printf("\nUNDERFLOW");
                continue;
            }
            arr[top]=0;
            top--;
        }
        else if(ch==3){
            printf("Top Value is : %d",arr[top]);
        }
        else if(ch==4){
            printf("\nSTACK\n");
            for(i=0;i<=top;i++){
                printf("\n%d",arr[i]);
                }
            }
        else if(ch==5){
            break;
        }
    }
}
