#include<stdio.h>
#include<stdlib.h>
//Creating a Linked List
typedef struct node{
    int data;
    struct node *next;
}node;
void main(){
    node *head, *p, *q;
    int n,i;
    printf("Enter The Number of Elements you want to Enter: ");
    scanf("%d",&n);
    //Insertiong of Element in Linked List
    head=(node*) malloc(sizeof(node));
    printf("\nEnter Value 1 : ");
    scanf("%d",&(head -> data));
    head-> next=NULL;
    p=head;
    for(i=1;i<n;i++){
        p-> next=(node* ) malloc(sizeof(node));
        p=p-> next;
        printf("Enter Value %d : ",i+1);
        scanf("%d",&(p-> data));
        p-> next=NULL;
    }
    printf("\nValue are entered Successfully!!\n");
    //Printing the Linked list and Counting Number of Nodes in Linked List
    int pos;
    printf("\nEnter at which position you want insert a node: ");
    scanf("%d",&pos);
    p=head;
    int count=0;
    while(p!=NULL){
        count++;
        //Inserting at first position
        if(pos==1){
            q=p;
            p=(node*)malloc(sizeof(node));
            p=p->next;
            head=p;
            printf("\nEnter the new value to insert: ");
            scanf("%d",&p->data);
            p->next=q;
            break;
        }
        //Inserting at Last position
        else if(count+1==pos && pos>n){
            q=(node*)malloc(sizeof(node));
            printf("\nEnter the new value to insert: ");
            scanf("%d",&q->data);
            q->next=NULL;
            p->next=q;
            break;
        }
        //Inserting at Mid position
        else if(count==pos-1){
            q=p->next;
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
            printf("\nEnter the new value to insert: ");
            scanf("%d",&(p->data));
            p->next=q;
            break;
        }
        p= p->next;
    }
    printf("\n\nThe New Linked List is: \n");
    //PRINTING
    p=head;
    while(p!=NULL){
        printf("\n%d",p->data);
        p=p->next;
    }
    printf("\n\nTHANKS!!\n");
}
