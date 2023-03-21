#include<stdio.h>
#include<stdlib.h>
//Linked List
typedef struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}node;

void main(){
    node *p,*head,*pre,*q;
//size of linked list
    int n,i;
    printf("Enter The No. of element you want to Enter: ");
    scanf("%d",&n);
//inserting element in linked list
    head=(node*)malloc(sizeof(node));
    printf("Enter The Value in Linked List: ");
    scanf("%d",&head->data);
    head->prev=NULL;
    head->next=NULL;
    p=head;
    for(i=1;i<n;i++){
        p->next=(node*)malloc(sizeof(node));
        pre=p->next;
        p=p->next;
        p->prev=pre;
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
    //deletion 
    int pos,count=-1;
    printf("\nEnter position of Deletion in a linked list: ");
    scanf("%d",&pos);
    p=head;
    while(p!=NULL){
        count++;
        if(pos==0){
            head=p->next;
            p=p->next;
            p->prev=NULL;
            break;
        }
        else if(pos==count+1 && pos+1==n){
            p->next=NULL;
            break;
        }
        else if(count+1==pos){
            q=p->next;
            p->next=q->next;
            q=q->next;
            q->prev=p;
            break;
        }
        p=p->next;
    }
    //printing
    printf("\nThe Value In Linked List are: \n");
    p=head;
    while(p!=NULL){
        printf("\n%d",p->data);
        p=p->next;
}
}
