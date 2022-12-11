#include<bits/stdc++.h>
using namespace std;
class Tree
{
    public:
    int data;
    Tree* left;
    Tree* right;
};
int maxi=0;
int maxDepth(Tree* root){
    if(root==NULL)return 0;
    maxi=max(maxi,maxDepth(root->left)+maxDepth(root->right));
    return 1+max(maxDepth(root->left),maxDepth(root->right));
}
Tree* newNode(int data) {
  Tree* node = new Tree();
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;
  return (node);
}

int main() {

   Tree* root = newNode(1);
  root -> left = newNode(2);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root -> right = newNode(3);
  root -> right -> left = newNode(6);
  root -> right -> right = newNode(7);
  root->right->right->right=newNode(8);
  cout<<"Diameter of the tree is "<<maxDepth(root)<<"\n";
}