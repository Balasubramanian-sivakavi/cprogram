#include "stdio.h"
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next ;
};
void display(struct node *first)
{
    int find,flag=0;
    printf("enter the number for find:");
    scanf("%d",&find);
    while(first !=NULL)
    {
        if(find==first->data)
        {
            flag=1;
        }
        printf("%d ",first ->data);
        first=first ->next;
    }
    if(flag==1){printf("\npresent");}
    else{printf("\nnot present");}
}
void create()
{
    struct node *first,*last;//first
    first= (struct node*)malloc(sizeof(struct node));
    int n;
    scanf("%d",&n);
    first->data=n;
    first->next=NULL;
    last=first;
    scanf("%d",&n);
while(n!=-1)
{
    struct node *temp;//temp
    temp= (struct node*)malloc(sizeof(struct node));
    temp->data=n;
    temp->next=NULL;
    last->next=temp;
    last=temp;
    scanf("%d",&n);
}
display(first);
}
void main()
{
    create();
}
