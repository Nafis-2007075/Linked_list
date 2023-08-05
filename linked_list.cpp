#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
void creation(node **head,int item)
{
    node *ptr,*temp;
    ptr=new node();
    ptr->next=NULL;
    ptr->data=item;
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
void del_end(node **head)
{
    node *temp,*prevnode;
    temp=*head;
    while(temp->next!=NULL)
    {
        prevnode=temp;
        temp=temp->next;
    }
    prevnode->next=NULL;
    delete temp;
}

void del_pos(node **head,int n)
{
    node *temp,*prevnode;
    temp=*head;
    int i=1;
    while(i<n-1)
    {
        prevnode=temp;
        temp=temp->next;
        i++;
    }
    prevnode->next=temp->next;
    delete temp;
}

void get_len(node **head)
{
    int i=0;
    node *temp;
    temp=*head;
    while(temp!=NULL)
    {
        temp=temp->next;
        i++;
    }
    cout<<i<<endl;
}

void display(node **head)
{
    node *temp;
    temp=*head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
}

int main()
{
    node *head=NULL;
    int i,n,item;
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        cin>>item;
        creation(&head,item);
    }
    display(&head);
    cout<<endl;
    //del_end(&head);
    //display(&head);
    //cout<<endl;
    cout<<"Enter position : "<<endl;
    cin>>n;
    del_pos(&head,n);
    display(&head);
    cout<<endl;
    get_len(&head);
    //display(&head);
    cout<<endl;
}