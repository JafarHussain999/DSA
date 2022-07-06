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

node* inorderSucc(node* root){
    node* curr=root;
    while(curr and curr->left!= NULL){
        curr=curr->left;
    }
    return curr;
}
node* deleteinnBST(node* root,int key){
    if( root->data > key){
        root->left= deleteinnBST(root->left,key);
    }
    else if(root->data < key){
        root->right= deleteinnBST(root->right,key);
    }
    else{
        if(root->left == NULL ){
            node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            node* temp=root->left;
            free(root);
            return temp;
        }
        node* temp=inorderSucc(root->right);
        root->data=temp->data;
        root->right=deleteinnBST(root->right,temp->data);
    }
    return root;
}

void inorder(node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node* root=new node(4); 
    root->left=new node(2);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->right=new node(6);

    //inorder(root);
    root = deleteinnBST(root,5); 
    cout<<"\n";
    inorder(root);
    /*
            4
          /   \
        2      5
        /\      \ 
       1  3      6
    */

    return 0;
}