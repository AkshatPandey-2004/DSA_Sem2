#include<stdio.h>
#include<stdlib.h>
//Linked List
typedef struct Node{
    int data;
    struct Node *next;
}node;

void main(){
    node *p,*head,*q;
//size of linked list
    int n,i;
    printf("Enter The No. of element you want to Enter: ");
    scanf("%d",&n);
//inserting element in linked list
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
        p->next=NULL;
    }
    printf("\nValue Inserted");
//printing in linked list
    printf("\nThe Value In Linked List are: \n");
    p=head;
    while(p!=NULL){
        printf("\n%d",p->data);
        p=p->next;
    }
    //Sorting
    p=head;
    int temp;
    while(p!=NULL){
        q=p->next;
        while(q!=NULL){
            if(p->data > q->data){
                //Cursor;
                temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
            q=q->next;
        }
        p=p->next;
    }
    //printing
    printf("\n\nThe Sorted Linked List : \n");
    p=head;
    while(p!=NULL){
        printf("\n%d",p->data);
        p=p->next;
    }
}

