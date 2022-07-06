#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void InsertAtBegin(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void InsertAtEnd(node* &head,int val){
    node* n=new node(val);
    node* temp=head;

    if(head == NULL){
        head=n;
        return;
    }
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}

bool search(node* head,int key){
    node* temp=head;
    while (temp!=NULL)
    {
        if(temp->data == key){
            return true;
        }
        temp=temp->next;
    }    
    return false;
}

void deletion(node* &head,int val){
    node* temp=head;
    if(head->data == val){
        head=head->next;
        return;
    }
    while(temp->next->data != val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<"\n";
    cout<<"-----------------\n";
}
int main(){
    node* head=NULL;
    
    InsertAtEnd(head,1);
    InsertAtEnd(head,2);
    InsertAtEnd(head,3);
    display(head);
    
    InsertAtBegin(head,4);
    display(head);

    int key=1;
    if(search(head,key) == true){
        cout<<"Element is found in the linkedlist";
    }
    else{
        cout<<"Element is not in linkedlist";
    }
    cout<<"\n";

    deletion(head,4);
    display(head);
    return 0;
}