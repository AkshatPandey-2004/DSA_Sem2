#include<stdio.h>
#include<stdlib.h>
//Creating a Linked List
typedef struct node{
    int data;
    struct node *next;
}node;
void main(){
    node *head, *p;
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
    printf("\nValue are entered Successfully!!");
    //Printing the Linked list and Counting Number of Nodes in Linked List
    p=head;
    int count=0;
    printf("\n\nThe Elements in the Linked List are: ");
    while(p!=NULL){
        count++;
        printf("\n%d",p->data);
        p= p->next;
    }
    printf("\n\nNumber of Nodes in the Linked List is: %d",count);
    //Searching a Element in the Linked List
    int search;
    printf("\n\nEnter the Element to Search in the Linked List: ");
    scanf("%d",&search);
    p=head;
    count=0;
    while(p!=NULL)
    {
        count++;
        if(p->data==search)
        {
            printf("\n\t\tElement Found!!!\n\n");
            printf("Element %d is present at %d Node",p->data,count);
        }
        p=p->next;
    }
} 
//CODE BY-AKSHAT PANDEY BATCH-9
