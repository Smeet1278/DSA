#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void dubbly_append(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev=temp;
    // cout<<temp->prev->data;
    
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    dubbly_append(head, 1);
    dubbly_append(head, 2);
    dubbly_append(head, 3);
    display(head);
}