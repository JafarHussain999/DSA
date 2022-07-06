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

node* searchinBST(node* root,int key){
    if(root == NULL) return NULL;

    if( root->data == key){
        return root;
    }
    if( root->data > key){
        return searchinBST(root->left,key);
    }
    return searchinBST(root->right,key);
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    if(searchinBST(root,17) == NULL){
        cout<<"Key not exist\n";
    }
    else{
        cout<<"Key exist\n";
    }
    /*
            1
          /   \
        2      3
        /\     /\ 
       4  5   6  7
    */
    return 0;
}