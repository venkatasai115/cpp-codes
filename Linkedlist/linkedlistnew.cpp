#include<bits/stdc++.h>
using namespace std;
class LL{
    public:
    int data;
    LL* next;
};
LL* head=NULL;
void print(LL* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
void insert(int val){
    LL* newnode=new LL();
    newnode->data=val;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        LL* dummy=head;
        while(dummy->next!=NULL){
            dummy=dummy->next;
        }
        dummy->next=newnode;
    }
}
vector<int> split(string s){
    char b=' ';
    string temp="";
    vector<int> a;
    for(int i=0;i<=s.size();i++){
       if(s[i]!=b){
           temp=temp+s[i];
       }
       else{
           a.push_back(stoi(temp));
           temp="";
       }
    }
    return a;
}
int main(){
    // First enter no of elements to be inserted and then the values
    int n;
    cin>>n;
    string s;
    cin.ignore();
    getline(cin,s);
    s=s+" ";
    vector<int>v=split(s);
    for(int i=0;i<v.size();i++){
        insert(v[i]);
    }
    print(head);
}