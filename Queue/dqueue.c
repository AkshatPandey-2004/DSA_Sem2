#include<stdio.h>
#include<stdlib.h>
int size=5,front=-1,rear=-1;
int queue[5];
void isFull();
void isEmpty();
void enqueue_at_rear();
void enqueue_at_front();
void dqueue_at_front();
void dqueue_at_rear();
void peek();
void display();
void main(){
    int ch;
    printf("\n\t\tQUEUE USING LINKED LIST\n");
    printf("Press 1 :Enqueue at front\n");
    printf("Press 2 :Enqueue at rear\n");
    printf("Press 3 :Dqueue at front\n");
    printf("Press 4 :Dqueue at rear\n");
    printf("Press 5 :peek\n");
    printf("Press 6 :Exit\n");
    while(1){
        printf("\nYour Choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
            enqueue_at_front();
            break;

            case 2:
            enqueue_at_rear();
            break;

            case 3:
            dqueue_at_front();
            break;

            case 4:
            dqueue_at_rear();
            break;

            case 5:
            peek();
            break;

            case 6:
            exit(0);
        }
        display();
    }
}
void isFull(){
    if((front==0 && rear==size-1) || front==rear+1){
        printf("Overflow");
        exit(0);
    }
}
void isEmpty(){
    if(front==-1){
        exit(0);
    }
}
void enqueue_at_front(){
    isFull();
    if(front==0){
        front=size-1;
    }
    else if(front==-1){
        front=rear=0;
    }
    else{
        front--;
    }
    printf("\nEnter The value: ");
    scanf("%d",&queue[front]);
}
void enqueue_at_rear(){
    isFull();
    if(rear==size-1){
        rear=0;
    }
    else{
        rear++;
    }
    if(front==-1){
        front++;
    }
    printf("\nEnter The value: ");
    scanf("%d",&queue[rear]);
}
void dqueue_at_front(){
    isEmpty();
    printf("%d has been removed",queue[front]);
    queue[front]=0;
    if(front==size-1){
        front=0;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front++;
    }
}
void dqueue_at_rear(){
    isEmpty();
    printf("%d has been removed",queue[rear]);
    queue[rear]=0;
    if(rear==0){
        rear=size-1;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        rear--;
    }
}
void peek(){
    isEmpty();
    printf("Front value of queue is : %d",queue[front]);
}
void display(){
    isEmpty();
    int i;
    i=front;
    printf("\n\nQUEUE\n");
    while(i!=rear){
        printf("%d\n",queue[i]);
        i=(i+1)%size;
    }
    printf("%d",queue[i]);
}
