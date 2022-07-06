#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int c=0;
int countnodes(node* root){
    if(root == NULL) return 0;
    c++;
    countnodes(root->left);
    countnodes(root->right);
    return c;
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<"count of nodes:";
    cout<<countnodes(root);
    /*
            1
          /   \
        2      3
        /\     /\ 
       4  5   6  7
    */

    return 0;
}