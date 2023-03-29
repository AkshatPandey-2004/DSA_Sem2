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
    printf("\nEnter The Size of Queue: ");
    scanf("%d",&size);
    int ch;
    printf("\n\t\tQUEUE USING LINKED LIST\n");
    printf("Press 1 :Enqueue\n");
    printf("Press 2 :Dqueue\n");
    printf("Press 3 :peek\n");
    printf("Press 4 :Display\n");
    printf("Press 5 :Exit\n");
    while(1){
        printf("\nYour Choice: ");
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
    if (rear==size-1){
        exit(0);
    }
}
void isEmpty(){
    if(front==-1 || front>rear){
        exit(0);
    }
}
void enqueue(){
    isFull();
    rear++;
    printf("Enter the value: ");
    scanf("%d",&queue[rear]);
    if(front==-1){
        front++;
    }
}
void dqueue(){
    isEmpty();
    printf("%d has been removed",queue[front]);
    front++;
}
void peek(){
    isEmpty();
    printf("Front value of queue is : %d",queue[front]);
}
void Display(){
    isEmpty();
    printf("\nQueue\n");
    for(int i=front;i<=rear;i++){
        printf("\n%d",queue[i]);
    }
}
