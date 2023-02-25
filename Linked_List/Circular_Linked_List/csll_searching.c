#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}node;
void main(){
    node *p,*head;
    int n,i;
    printf("Enter The size of Circular Linked LIst: ");
    scanf("%d",&n);
    head=(node*)malloc(sizeof(node));
    printf("\nENTER THE VALUE: ");
    scanf("%d",&head->data);
    head->next=head;
    p=head;
    for(i=1;i<n;i++){
        p->next=(node*)malloc(sizeof(node));
        p=p->next;
        printf("\nENTER THE VALUE: ");
        scanf("%d",&p->data);
        p->next=head;
    }
    printf("\nVALUE INSERTED SUCESSFULLY!!\n");
    printf("\nLINKED LIST -> \n");
    p=head;
    do{
        printf("\n%d",p->data);
        p=p->next;
    }while(p!=head);
  //searching
    int ser,count=0;
    printf("\nENTER THE VALUE TO SEARCH: ");
    scanf("%d",&ser);
    p=head;
    do{
        count++;
        if(p->data==ser){
            printf("%d FOUND AT %d NODE ",p->data,count);
        }
        p=p->next;
    }while(p!=head);
    printf("\nTHANKYOU!");
}
