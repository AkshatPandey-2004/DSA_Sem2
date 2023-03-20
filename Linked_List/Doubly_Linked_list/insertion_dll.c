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
    //insertion 
    int pos,count=-1;
    printf("\nEnter position of Insertion in a linked list: ");
    scanf("%d",&pos);
    p=head;
    while(p!=NULL){
        count++;
        //insertion at first position
        if(pos==0){
            q=(node*)malloc(sizeof(node));
            q->prev=NULL;
            printf("\nEnter The New Value: ");
            scanf("%d",&q->data);
            q->next=head;
            head=q;
            p->prev=q;
            break;
        }
        //insertion at last position
        else if(pos==n && count+1==pos){
            q=(node*)malloc(sizeof(node));
            q->next=NULL;
            printf("\nEnter The New Value: ");
            scanf("%d",&q->data);
            p->next=q;
            q->prev=p;
            break;
        }
        else if(count==pos-1){
            q=(node*)malloc(sizeof(node));
            printf("\nEnter The New Value: ");
            scanf("%d",&q->data);
            q->next=p->next;
            q->prev=p;
            p->next=q;
            p=q->next;
            p->prev=q;
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
