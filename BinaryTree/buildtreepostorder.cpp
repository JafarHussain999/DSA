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

int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

node* buildtree(int postorder[],int inorder[],int start,int end){
    static int idx=4;//idx won't overwrite
    if(start > end){
        return NULL;
    }
    int curr=postorder[idx];
    idx--;
    node* noder=new node(curr);
    if(start == end){
        return noder;
    }
    int pos = search(inorder,start,end,curr);
    noder->right=buildtree(postorder,inorder,pos+1,end);
    noder->left=buildtree(postorder,inorder,start,pos-1);
    return noder;
}

void inorderprint(node* root){
    if(root == NULL) return;
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}

int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    node* root=buildtree(postorder,inorder,0,4);
    inorderprint(root);
    return 0;
}