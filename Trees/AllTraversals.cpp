#include <bits/stdc++.h>

using namespace std;

class Tree {
 public:
  int data;
  Tree* left;
  Tree* right;
};

void allTraversal(Tree * root, vector < int > & pre, vector < int > & in , vector < int > & post) {
  stack < pair < Tree * , int >> st;
  st.push({
    root,
    1
  });
  if (root == NULL) return;

  while (!st.empty()) {
    auto it = st.top();
    st.pop();

    // this is part of pre
    // increment 1 to 2 
    // push the left side of the tree
    if (it.second == 1) {
      pre.push_back(it.first -> data);
      it.second++;
      st.push(it);

      if (it.first -> left != NULL) {
        st.push({
          it.first -> left,
          1
        });
      }
    }

    // this is a part of in 
    // increment 2 to 3 
    // push right 
    else if (it.second == 2) {
      in .push_back(it.first -> data);
      it.second++;
      st.push(it);

      if (it.first -> right != NULL) {
        st.push({
          it.first -> right,
          1
        });
      }
    }
    // don't push it back again 
    else {
      post.push_back(it.first -> data);
    }
  }
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

  vector < int > pre, in , post;
  allTraversal(root, pre, in , post);

  cout << "The preorder Traversal is : ";
  for (auto nodeVal: pre) {
    cout << nodeVal << " ";
  }
  cout << endl;
  cout << "The inorder Traversal is : ";
  for (auto nodeVal: in ) {
    cout << nodeVal << " ";
  }
  cout << endl;
  cout << "The postorder Traversal is : ";
  for (auto nodeVal: post) {
    cout << nodeVal << " ";
  }
  cout << endl;

  return 0;
}