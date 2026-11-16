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
void preorder(node* root){
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root){
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node* root){
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node*root =newNode(10);
    root->left =newNode(20);
    root->right =newNode(30);
    root->left->left =newNode(40);
    cout<<"Preorder traversal: ";
    preorder(root);

    cout<<"\nInorder traversal: ";
    inorder(root);

    cout<<"\nPreorder traversal: ";
    postorder(root);
    return 0;
}