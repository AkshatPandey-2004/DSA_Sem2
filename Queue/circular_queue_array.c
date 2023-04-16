#include<stdio.h>
#include<stdlib.h>
int size=5,front=-1,rear=-1;
int queue[5];
void isFull();
void isEmpty();
void enqueue();
void dqueue();
void peek();
void display();
void main(){
    int ch;
    printf("\n\t\tQUEUE USING LINKED LIST\n");
    printf("Press 1 :Enqueue\n");
    printf("Press 2 :Dqueue\n");
    printf("Press 3 :peek\n");
    printf("Press 4 :Display\n");
    printf("Press 5 :Exit\n");
    while(1){
        printf("\nYour Choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
            enqueue();
            break;

            case 2:
            dqueue();
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

        }
    }
}
void isFull(){
    if((rear+1)%size==front){
        printf("Overflow");
        exit(0);
    }
}
void isEmpty(){
    if(front==-1){
        exit(0);
    }
}
void enqueue(){
    isFull();
    if(rear==size-1){
        rear=(rear+1)%size;
        }
    else{
        rear++;
    }
    printf("Enter the value: ");
    scanf("%d",&queue[rear]);
    if(front==-1){
        front++;
    }
}
void dqueue(){
    isEmpty();
    printf("%d has been removed",queue[front]);
    queue[front]=0;
    if(front==rear){
        front=rear=-1;
    }
    else if(front==size-1){
        front=0;
    }
    else{
        front++;
    }
}
void peek(){
    isEmpty();
    printf("Front value of queue is : %d",queue[front]);
}
void display(){
    int i;
    isEmpty();
    i=front;
    printf("\n\nQUEUE\n");
    while(i!=rear){
        printf("%d\n",queue[i]);
        i=(i+1)%size;
    }
    printf("%d",queue[i]);
}
