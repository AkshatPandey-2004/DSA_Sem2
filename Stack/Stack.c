#include<stdio.h>
#include<stdlib.h>
//Global Variable
int Stack[5];
int top=-1;
//size of stack
int n=5;
//Functions
int isFull();
int isEmpty();
int pop();
int peek();
int push();
int Display();
int main(){
    int ch;
    //User interface
    printf("\n\t\tENTER YOUR CHOICE");
    printf("\nPress 1: To Push element in the stack");
    printf("\nPress 2: To Pop element in the stack");
    printf("\nPress 3: To Peep element in the stack");
    printf("\nPress 4: To Display element in the stack");
    printf("\nPress 5: EXIT");
    //infinite loop
    while(1){
        printf("\nYour Choice: ");
        scanf("%d",&ch);
        //insertion
        if(ch==1){
            push();
        }
        //deletion
        else if(ch==2){
            pop(top);
        }
        //topmost value
        else if(ch==3){
            peep(top);
        }
        //printing stack
        else if(ch==4){
            Display();

        }
        //exit loop
        else{
            break;
        }
    }
}
//functions
int isFull(){
    if(top==n-1){
        printf("Stack is Full");
        exit(0);
    }
}
int isEmpty(){
    if(top==-1){
        printf("Stack is Empty");
        exit(0);
    }
}
int push(){
    isFull();
    top++;
    printf("\nEnter The Element: ");
    scanf("%d",&Stack[top]);
}
int pop(){
    isEmpty();
    Stack[top]=0;
    top--;
}
int peep(){
    printf("Toppmost Value is : %d",Stack[top]);
}
int Display(){
    isEmpty();
    printf("\nStack:- \n");
    for(int i=0;i<=top;i++){
        printf("%d\n",Stack[i]);
    }
}
