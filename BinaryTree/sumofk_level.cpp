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

int sumklevel(node* root,int k){
    int sum=0,level=0;
    if(root == NULL){
        return 0;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* node=q.front();
        q.pop();
        if(node != NULL){
            if(level == k){
                sum+=node->data;
            }
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
        
    }
    return sum;

}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<"Level sum:";
    cout<<sumklevel(root,2);
    /*
            1
          /   \
        2      3
        /\     /\ 
       4  5   6  7
    */

    return 0;
}