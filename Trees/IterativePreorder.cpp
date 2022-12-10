#include <bits/stdc++.h>

using namespace std;

 class Tree {
  public:
  int data;
  Tree* left;
  Tree* right;
};

vector < int > preOrderTrav(Tree* curr) {
  vector < int > preOrder;
  if (curr == NULL)
    return preOrder;

  stack < Tree* > s;
  s.push(curr);

  while (!s.empty()) {
    Tree* topNode = s.top();
    preOrder.push_back(topNode -> data);
    s.pop();
    if (topNode -> right != NULL)
      s.push(topNode -> right);
    if (topNode -> left != NULL)
      s.push(topNode -> left);
  }
  return preOrder;

}

Tree* newNode(int data) {
  Tree * node = new Tree();
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;
  return (node);
}

int main() {

  Tree* root = newNode(1);
  root -> left = newNode(2);
  root -> right = newNode(3);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root -> left -> right -> left = newNode(8);
  root -> right -> left = newNode(6);
  root -> right -> right = newNode(7);
  root -> right -> right -> left = newNode(9);
  root -> right -> right -> right = newNode(10);

  vector < int > preOrder;
  preOrder = preOrderTrav(root);

  cout << "The preOrder Traversal is : ";
  for (int i = 0; i < preOrder.size(); i++) {
    cout << preOrder[i] << " ";
  }
  return 0;
}