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

node* InsertBST(node* root,int val){

    if(root == NULL){
        return new node(val);
    }
    if(val < root->data ){
        root->left=InsertBST(root->left,val);
    }
    else{
        root->right=InsertBST(root->right,val);
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
    node* root=NULL;
    root = InsertBST(root,5);
    InsertBST(root,1);
    InsertBST(root,3);
    InsertBST(root,4);
    InsertBST(root,2);
    InsertBST(root,7);

    inorder(root);
    return 0;
}