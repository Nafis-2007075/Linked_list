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
    node *ptr=new node();
    ptr->data=item;
    ptr->next=NULL;
    node *temp;
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
void insert_pos(node **head,int item,int i)
{
    node *ptr=new node();
    node *temp=*head;
    ptr->data=item;
    ptr->next=NULL;
    int pos=1;
    while(pos<i-1)
    {
        pos++;
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=ptr;
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
    int n,i,item;
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        cin>>item;
        creation(&head,item);
    }
    display(&head);
    cout<<endl;
    cout<<"Enter the position" <<endl;
    cin>>i;
    cout<<"Enter the value of postion insert : "<<endl;
    cin>>item;
    insert_pos(&head,item,i);
    display(&head);
}