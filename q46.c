#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    int n1,n2,i;
    struct node *head1=NULL,*head2=NULL,*temp,*newnode;

    printf("Enter number of nodes in list1: ");
    scanf("%d",&n1);

    for(i=1;i<=n1;i++){
        newnode=(struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d",&newnode->data);

        newnode->next=NULL;

        if(head1==NULL){
            head1=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }

   
    printf("Enter number of nodes in list2: ");
    scanf("%d",&n2);

    for(i=1;i<=n2;i++){
        newnode=(struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d",&newnode->data);

        newnode->next=NULL;

        if(head2==NULL){
            head2=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }

  
    if(head1==NULL && head2==NULL){
        printf("Both lists are empty\n");
    }
    else if(head1==NULL){
        head1=head2;
    }
    else if(head2==NULL){
        
    }
    else{
        temp=head1;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head2;
    }

   
    printf("Merged Linked List: ");
    temp=head1;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");

    return 0;
}