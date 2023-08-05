#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*newnode,*temp;
    head=0;
    int x=5;
    while(x--)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        temp=head;
        while(temp!=0)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }

}
