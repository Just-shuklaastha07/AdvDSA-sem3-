#include <iostream>
using namespace std;

struct node{
    int data;
    node*left;
    node*right;
};
node* newNode(int data)
{
    node*temp = new node();
    temp->data =data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

int countNodes(node* root){
    if(root==NULL)
    return 0;
    return 1+ countNodes(root->left)+countNodes(root->right);
}

int main(){
    node*root =newNode(10);
    root->left =newNode(20);
    root->right =newNode(30);
    root->left->left =newNode(40);
    root->left->right =newNode(50);
    root->left->right->left =newNode(60);
    root->left->right->right =newNode(70);
    cout<<"Total Nodes: "<<countNodes(root);
    return 0;
}