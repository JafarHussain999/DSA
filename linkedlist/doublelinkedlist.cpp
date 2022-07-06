#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};

void InsertAtEnd(node* &head,int val){
    node* n=new node(val);
    if(head == NULL){
        head=n;
        return;
    }
    node* temp=head;
    while (temp->next != NULL)          
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void InsertAtStart(node* &head,int val){
    node* n=new node(val);
    if(head == NULL){
        head=n;
        return;
    }   
    n->next=head;
    head->prev=n;
    head=n;
}

void deletion(node* &head,int pos){
    node* temp=head;
    for(int i=0;i<pos;i++){
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete(temp);


}

void display(node* head){
    cout<<"\n-------------\n";
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";    
}

int main(){
    node* head=NULL;
    InsertAtEnd(head,1);
    InsertAtEnd(head,2);
    InsertAtEnd(head,3);
    InsertAtEnd(head,4);
    InsertAtEnd(head,5);
    display(head);
    InsertAtStart(head,6);
    InsertAtStart(head,7);
    display(head);
    deletion(head,2);
    display(head);

}