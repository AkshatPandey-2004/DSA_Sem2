#include<stdio.h>
#include<stdlib.h>
//Linked List
typedef struct Node{
    int data;
    struct Node *next;
}node;
//Global Variable
node *head,*p,*q;
int top=-1,size;
//Function Declaration
void isFull();
void isEmpty();
void pop();
void push();
void peek();
void display();
//Menu-Driven Program
void main(){
    int ch;
    printf("\nEnter The Size of the Stack: ");
    scanf("%d",&size);
    printf("\n\t\tSTACK USING LINKED LIST\n");
    printf("Press 1 :Push a Element in a Stack\n");
    printf("Press 2 :Pop a Element in a Stack\n");
    printf("Press 3 :Print the toppmost value in a stack\n");
    printf("Press 4 :Display the Stack\n");
    printf("Press 5 :Exit\n");
    //Infinite Loop
    while(1){
        printf("\nYour Choice: ");
        scanf("%d",&ch);
        switch (ch){
            case 1:
            push();
            break;
            
            case 2:
            pop();
            break;

            case 3:
            peek();
            break;

            case 4:
            display();
            break;

            case 5:
            exit(0);
            break;

            default:
            printf("INCORRECT VALUE\n");
            break;
        }
    }
}
//Funtion Defination
void isFull(){
    if(top==size-1){
        printf("OVERFLOW");
        exit(0);
    }
}
void isEmpty(){
    if(top==-1){
        printf("UNDERFLOW");
        exit(0);
    }
}
void push(){
    isFull();
    top++;
    //If Stack is Empty
    if(top==0){
        head=(node*)malloc(sizeof(node));
        printf("\nEnter The Value: ");
        scanf("%d",&head->data);
        head->next=NULL;
        p=head;
    }
    //if Stack has multiple element
    else{
        //bringing p pointer to last node
        p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        //insertion
        p->next=(node*)malloc(sizeof(node));
        p=p->next;
        printf("\nEnter The Value: ");
        scanf("%d",&p->data);
        p->next=NULL;
    }
}
void pop(){
    isEmpty();
    //if Stack has only one element
    if(top==0){
        printf("\nPopped Element is : %d",head->data);
        free(head);
        free(p);
    }
    //If Stack has multiple element
    else{
        p=head;
        while(p->next!=NULL){
            q=p;
            p=p->next;
        }
        q->next=NULL;
        printf("\nPopped Element is : %d",p->data);
    }
    top--;
}
void peek(){
    p=head;
    while(p!=NULL){
        if(p->next==NULL){
            printf("\nToppmost Value of Stack is: %d",p->data);
            break;
        }
        p=p->next;
    }
}
void display(){
    isEmpty();
    p=head;
    printf("\nStack\n");
    while(p!=NULL){
        printf("\n%d",p->data);
        p=p->next;
    }
}
//Code By: Akshat Pandey B-9
