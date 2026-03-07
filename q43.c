//count node
#include<stdio.h>
#include<stdlib.h>
struct node{
    int a;
    struct node *next;
};
struct node *head=NULL;
void count(){
    int count=0;
    if(head==NULL){
        printf("no node present");
        return ;
    }
    struct node*t=head;
    while(t!=NULL){
        count++;
        t=t->next;
    }
    printf("total nodes are: %d",count);
}
int main(){
    struct node *first=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    first->a=10;
    first->next=second;
    second->a=20;
    second->next=third;
    third->a=30;
    third->next=NULL;
    head=first;
    count();
    
    return 0;
}

   
