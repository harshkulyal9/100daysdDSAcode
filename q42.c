//Middle of the Linked List
#include<stdio.h>
#include<stdlib.h>
struct node{
    int a;
    struct node *next;
};
int main(){
    struct node*first=(struct node*)malloc(sizeof(struct node));
    struct node*second=(struct node*)malloc(sizeof(struct node));
    struct node*third=(struct node*)malloc(sizeof(struct node));
    struct node*fourth=(struct node*)malloc(sizeof(struct node));
    struct node *head;
    first->a=10;
    first->next=second;
    second->a=20;
    second->next=third;
    third->a=30;
    third->next=fourth;
    fourth->a=40;
    fourth->next=NULL;
    head=first;
    struct node*t=head;
    int count =0;
    while(t!=NULL){
        count=count+1;
        t=t->next;
    }
    int mid=count/2;
    t=head;
    for(int i=1;i<mid;i++){
        t=t->next;
    }
    printf("%d ->",t->a);
    return 0;
}
