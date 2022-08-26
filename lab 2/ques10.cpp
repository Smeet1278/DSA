#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertatail(node *&head, int val)
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
}

void replatind(node *&head,int position, int element)
{
    node* temp=head;
    node* insert= new node(element);
    int count=1;
    while(count!=position)
    {
        temp=temp->next;
        count++;
    }

    insert->next = temp->next->next;
    delete temp->next;
    temp->next=insert;
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
    insertatail(head, 1);
    insertatail(head, 2);
    insertatail(head, 3);
    display(head);
    replatind(head,2,7);
    display(head);
}