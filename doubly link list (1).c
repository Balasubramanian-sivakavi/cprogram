#include "stdio.h"
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next,*prev ;
};
void display(struct node *first)
{
    int find,flag=0;
    printf("enter the number to find");
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
        if(flag==1)
        {
            printf("present");
        }
        else
        {
            printf("\n not present");
        }

}
void create()
{
    struct node *first,*last;//first
    first= (struct node*)malloc(sizeof(struct node));
    int n;
    scanf("%d",&n);
    first->data=n;
    first->prev=NULL;
    first->next=NULL;
    last=first;
    scanf("%d",&n);
    while(n!=-1)
    {
        struct node *temp;//temp
        temp= (struct node*)malloc(sizeof(struct node));
        temp->data=n;
        temp->prev=last;

        temp->next=NULL;
        last->next=temp;
        last=temp;
        scanf("%d",&n);
    }
    display(first);
    _(last);

}
void main()
{
    create();
}
void _(struct node*last)
{
    int count=0;
    while(last !=NULL)
    {
        printf("%d ",last ->data);
        last=last ->prev;
        count++;
    }
    printf("\n count=%d",count);

}
