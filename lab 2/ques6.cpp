#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertatHead(node* &head,int val)
{
    node* n= new node(val);
    n->next=head;
    head=n;
}

void insertatTail(node* &head,int val)
{

    node* n = new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }
     
     node* temp=head;
     while(temp-> next!=NULL)
     {
         temp=temp->next;
     }
     temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void lsrch(node* head,int element)
{
    node* temp=head;
    bool flag=false;
    while(temp!=NULL)
    {
        if(temp->data==element)
        {
            flag=true;
            break;
        }
        temp=temp->next;
    }
    if(flag)
    cout<<element<<endl;
    else
    cout<<"-1"<<endl;

}
int main(){

    node* head= NULL;
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    lsrch(head,3);
}