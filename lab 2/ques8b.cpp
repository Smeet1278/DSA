#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct Node{
    int data;
    Node* next;
};

Node* head=NULL;

void insertBeg(int x){
    Node *ptr = new Node();
    ptr->data = x;
    ptr->next = head;
    head=ptr;
}

void deleteEnd(){
    Node *ptr, *prev;
    if(head==NULL){
        cout<<"Empty list";
    }else if(head->next==NULL){
        ptr=head;
        head=NULL;
        free(ptr);
    }else{
        ptr=head;
        while(ptr->next!=NULL){
            prev=ptr;
            ptr=ptr->next;
        }prev->next=NULL;
        free(ptr);
    }    
}

void display(){
    Node *n = head;
    if(head==NULL){
        cout<<"Empty List";
    }else{
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
}

int main(){
    Node *ptr = new Node();
    insertBeg(2);
    insertBeg(4);
    insertBeg(6);
    insertBeg(8);
    insertBeg(10);
    deleteEnd();
    display();
    return 0;
}