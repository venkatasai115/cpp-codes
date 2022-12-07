#include<bits/stdc++.h>
using namespace std;
class LL{
    public:
    int data;
    LL* next;
};
void insert(LL** headr,int val){
    LL* newnode=new LL();
    newnode->data=val;
    newnode->next=NULL;
    if(*headr==NULL){
        *headr=newnode;
    }
    else{
        LL* dummy=*headr;
        while(dummy->next!=NULL){
            dummy=dummy->next;
        }
        dummy->next=newnode;
    }
}
void print(LL* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
vector<int> split(string s){
    char b=' ';
    string temp="";
    vector<int> a;
    for(int i=0;i<s.size();i++){
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
    LL* head=NULL;
    int n;
    cin>>n;
    string s;
    cin.ignore();
    getline(cin,s);
    s=s+" ";
    vector<int>v=split(s);
    for(int i=0;i<v.size();i++){
        insert(&head,v[i]);
    }
    print(head);
    return 0;
}