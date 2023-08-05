#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    node *next;
    int data;
};
void creation(node **head,int info)
{
    node *ptr,*temp;
    ptr=new node();
    ptr->data=info;
    ptr->next=NULL;
    if(*head==NULL)
    {
        *head=temp=ptr;
    }
    else
    {
        temp->next=ptr;
        temp=ptr;
    }   
}
void sort(node **head)
{
    node *temp,*ptr;
    for(temp=*head ; temp!=NULL ; temp=temp->next)
    {
        for(ptr=temp->next ; ptr!=NULL ; ptr=ptr->next)
        {
            if(temp->data > ptr->data)
            {
                swap(temp->data , ptr->data);
            }
        }
    }
}
void display(node **head)
{
    node *temp=*head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
}
int main()
{
    int n,i,info;
    node *head=NULL;
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        cin>>info;
        creation(&head,info);
    }
    display(&head);
    cout<<endl;
    sort(&head);
    display(&head);
}