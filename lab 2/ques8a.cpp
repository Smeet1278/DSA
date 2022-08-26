#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void linsatend(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    //cout<<temp->data<<endl;
}

void linsatbeg(node* &head,int val)
{
    node * n=new node(val);
    node* temp=head;
    n->next=temp;
    head=n;
}

void display(node * head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main()
{
    node* head=NULL;
    linsatend(head,1);
    linsatend(head,2);
    linsatend(head,3);
    linsatend(head,4);
    //display(head);
    linsatbeg(head,55);
    display(head);
}