#include<bits/stdc++.h>
using namespace std;
struct lis
{
    int data;
    struct lis *next;
};
int main()
{
    struct lis *node,*temp,*head;
    int x;
    cin>>x;
    head=0;
    while(x--)
    {
        node=(struct lis *)malloc(sizeof(struct lis));
        cin>>node->data;
        node->next=0;
        if(head==0)
            head=temp=node;
        else
            {
                temp->next=node;
                temp=node;
            }
    }
    temp=head;
    while(temp->next != 0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
}
