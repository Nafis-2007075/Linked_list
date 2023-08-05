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
    node *temp,*ptr;
    //temp=*head;
    ptr=new node();
    ptr->data=item;
    ptr->next=NULL;
    if(*head==NULL)
    {
        *head=temp=ptr;
        //temp=temp->next;
    }
    else
    {
       temp->next=ptr;
       temp=ptr;
    }
    temp->next=*head;
}

void display(node **head)
{
    node *temp;
    temp=*head;
    while(temp->next!=*head)
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
}