#include<bits/stdc++.h>
using namespace std;
class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;
};
Tree* heaad=NULL;
void levelorderTraversal(vector<vector<int>>&levelorder,queue<Tree*> q)
{
    if(q.empty() == true){
        return ;
    }
    vector<int> level;
    int s=q.size();
    for(int i=0;i<s;i++){
        Tree* node=q.front();
        q.pop();
        if(node->left!=NULL)q.push(node->left);
        if(node->right!=NULL)q.push(node->right);
        level.push_back(node->data);
    }
   levelorder.push_back(level);
  /* for(auto &v:levelorder){
       for(auto &k:v){
        cout<<k<<"\n";
       }
    }*/
   levelorderTraversal(levelorder,q);
}
Tree* newNode(int data){
    Tree* node=new Tree();
    node-> data=data;
    node->left= NULL;
    node->right= NULL;
    return node;
}

int main(){
    Tree* head=newNode(1);
    head->left=newNode(2);
    head->right=newNode(3);
    head->left->left=newNode(4);
    head->left->right=newNode(5);
    head->right->left=newNode(6);
    head->right->right=newNode(7);
    vector<vector<int>> levelorder;
     queue<Tree*> q;
     q.push(head);
    levelorderTraversal(levelorder,q);
    for(auto &v:levelorder){
       for(auto &k:v){
        cout<<k<<"\n";
       }
    }
}