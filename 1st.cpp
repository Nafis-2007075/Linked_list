#include<bits/stdc++.h>
using namespace std;

class node
{
  public:
      int data;
      node *next;
};

void insert(node **head , int x)
{
  node *temp,*ptr;
  ptr=new node();
  ptr->data=x;
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

void split(node **head1,node **head2)
{
  node *temp,*ptr;
  temp=*head1;
  while(temp->data!=3)
  {
    temp=temp->next;
  }
  ptr=temp->next
  ;
  temp->next=NULL;
  *head2=ptr;
}

void merge(node *p,node *q,node **head3)
{
  node *sort;
  if(p==NULL)
  {
    sort=q;
  }
  else if(q==NULL)
  {
    sort=p;
  }
  else
  {
    if(p->data <= q->data)
    {
      sort=p;
      p=p->next;
    }
    else
    {
      sort=q;
      q=q->next;
    }
  }
  *head3=sort;
  while(p&&q)
  {
    if(p->data <=q->data)
    {
      sort->next=p;
      sort=p;
      p=sort->next;
    }
    else
    {
      sort->next=q;
      sort=q;
      q=sort->next;
    }
  }
  if(p==NULL)
  {
    while(q!=NULL)
    {
      sort->next=q;
      q=q->next;
    }
  }
  else if(q==NULL)
  {
    while(p!=NULL)
    {
      sort->next=p;
      p=p->next;
    }
  }
}

void del_pos(node **head1,int pos)
{
  node *prev,*temp;
  temp=*head1;
  int i=1;
  while(i!=pos)
  {
    prev=temp;
    temp=temp->next;
    i++;
  }
  prev->next=temp->next;
  delete temp;
}

void sorted_insert(node **head1,int x)
{
  node *temp,*ptr,*prev;
  ptr=new node();
  ptr->data=x;
  ptr->next=NULL;
  temp=*head1;
  while(temp->data<x)
  {
    prev=temp;
    temp=temp->next;
  }
  prev->next=ptr;
  ptr->next=temp;
}

void to_add(node **head1)
{
  node *temp;
  temp=*head1;
  while(temp!=NULL)
  {
    if(temp->data >=0 && temp->data <9)
    {
      temp->data=temp->data+1;
    }
    else
    {
      temp->data=0;
    }
    temp=temp->next;
  }
}

void merge_list(node *head1,node *head2,node **head3)
{
  node *temp,*ptr,*merge;
  int count=0;
  temp=merge=head1;
  ptr=head2;
  *head3=merge;
  while(ptr!=NULL)
  {
    if(count%2==0)
  {
    temp=temp->next;
    merge->next=ptr;
    merge=ptr;
    count++;
  }
  else
  {
    ptr=ptr->next;
    merge->next=temp;
    merge=temp;
    count++;
  }
  }
}

void display(node *head)
{
  node *temp;
  temp=head;
  while(temp->next!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<temp->data<<endl;
}

int main()
{
  node *head1=NULL;
  node *head2=NULL;
  node *head3;
  int i,x,n;
  cin>>n;
  for(i=0 ; i<n ; i++)
  {
    cin>>x;
    insert(&head1,x);
  }
  for(i=0 ; i<n ; i++)
  {
    cin>>x;
    insert(&head2,x);
  }
  // display(head1);
  // split(&head1,&head2);
  // display(head1);
  // display(head2);
  // merge(head1,head2,&head3);
  // display(head3);
  // del_pos(&head1,3);
  // display(head1);
  // sorted_insert(&head1,4);
  // display(head1);
  // to_add(&head1);
  // display(head1);
  merge_list(head1,head2,&head3);
  display(head3);
}