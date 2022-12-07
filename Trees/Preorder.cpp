#include<bits/stdc++.h>
using namespace std;
class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;
};
Tree* head=NULL;
void preOrderTrav(Tree* curr, vector < int > & preOrder) {
  if (curr == NULL)
    return;

  preOrder.push_back(curr -> data);
  preOrderTrav(curr -> left, preOrder);
  preOrderTrav(curr -> right, preOrder);
}

Tree* newNode(int data) {
  Tree* node = new Tree();
  node -> data = data;
  node -> left = NULL;
  node -> right = NULL;

  return (node);
}

int main() {

  Tree* head = newNode(1);
  head -> left = newNode(2);
  head -> right = newNode(3);
  head -> left -> left = newNode(4);
  head -> left -> right = newNode(5);
  head -> left -> right -> left = newNode(8);
  head -> right -> left = newNode(6);
  head -> right -> right = newNode(7);
  head -> right -> right -> left = newNode(9);
  head -> right -> right -> right = newNode(10);

  vector < int > preOrder;
  preOrderTrav(head, preOrder);

  cout << "The preOrder Traversal is : ";
  for (int i = 0; i < preOrder.size(); i++) {
    cout << preOrder[i] << "\n";
  }
  return 0;
}