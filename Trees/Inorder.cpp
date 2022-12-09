#include<bits/stdc++.h>
using namespace std;
class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;
};
Tree* head=NULL;
void inOrderTrav(Tree* curr, vector < int > & inOrder) {
  if (curr == NULL)
    return;
  inOrderTrav(curr -> left, inOrder);
  inOrder.push_back(curr -> data);
  inOrderTrav(curr -> right, inOrder);
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

  vector < int > inOrder;
  inOrderTrav(head, inOrder);

  cout << "The InOrder Traversal is : "<<"\n";
  for (int i = 0; i < inOrder.size(); i++) {
    cout << inOrder[i] << "\n";
  }
  return 0;
}