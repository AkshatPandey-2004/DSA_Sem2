#include<stdio.h>
#include<stdlib.h>
//Circular Linked List
typedef struct Node{
    int data;
    struct Node *next;
}node;

void main(){
    node *p,*head;
//size of Circular linked list
    int n,i;
    printf("Enter The No. of element you want to Enter: ");
    scanf("%d",&n);
//inserting element in Circular linked list
    head=(node*)malloc(sizeof(node));
    printf("Enter The Value in Linked List: ");
    scanf("%d",&head->data);
    head->next=NULL;
    p=head;
    for(i=1;i<n;i++){
        p->next=(node*)malloc(sizeof(node));
        p=p->next;
        printf("\nEnter The Value in Linked List: ");
        scanf("%d",&p->data);
        p->next=head;
    }
    printf("\nValue Inserted");
//printing in Circular linked list
    printf("\nThe Value In Circular Linked List are: \n");
    p=head;
    do{
        printf("\n%d",p->data);
        p=p->next;
    }while(p!=head);
    /* 2nd Method to print Circular Linked list
    while(p->next=head){
        printf("%d",p->data);
        p=p->next;
    }
    printf("%d",p->data);
    */
}
