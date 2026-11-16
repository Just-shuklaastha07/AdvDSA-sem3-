#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int v) {
        val = v;
        left = NULL;
        right = NULL;
    }
};

int cnt = 0;

TreeNode*  newNode(int v) {
    TreeNode* n = new TreeNode(v);

    n->left = NULL;
    n->right = NULL;

    return n;
}


void preorder(TreeNode* root) {
    if(root == NULL) {
        return;
    }
    cnt++;
    cout<<root->val<<" ";

    preorder(root->left);

    preorder(root->right);
}

void postorder(TreeNode* root) {
    if(root == NULL) {
        return;
    }

    postorder(root->left);

    postorder(root->right);

    cout<<root->val<<" ";
}

void inorder(TreeNode* root) {
    if(root == NULL) {
        return;
    }

    inorder(root->left);

    cout<<root->val<<" ";

    inorder(root->right);
}

int nodeCount(TreeNode* root) {
    if(root == NULL) return 0;

    return 1 + nodeCount(root->left) + nodeCount(root->right);
}

bool isTreeFull(TreeNode* root) {
    if(root == NULL) return true;

    if(root->left == NULL && root->right == NULL) return true;

    if(root->left == NULL || root->right == NULL) return false;

    return isTreeFull(root->left)&&isTreeFull(root->right);
}

int main() {

    TreeNode* root = newNode(10);

    root->left = newNode(20);

    root->right = newNode(30);

    root->left->left = newNode(40);

    root->left->right = newNode(50);

    cout<<"Preorder Traversal: ";
    preorder(root);

    cout<<"\nPostorder Traversal: ";
    postorder(root);

    cout<<"\nInorder Traversal: ";
    inorder(root);

    cout<<"\nTotal Nodes: "<<nodeCount(root)<<"\n";

    cout<<"\nIs Tree Full: "<<isTreeFull(root)<<"\n";

    return 0;

}