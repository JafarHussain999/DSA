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

int calHeight(node* root){
    if(root == NULL) return 0;
    int lheight=calHeight(root->left);
    int rheight=calHeight(root->right);
    return max(lheight,rheight)+1;

}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5); 
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<"Height:";
    cout<<calHeight(root)<<"\n";
    /*
            1
          /   \
        2      3
        /\     /\ 
       4  5   6  7
    */

    return 0;
}