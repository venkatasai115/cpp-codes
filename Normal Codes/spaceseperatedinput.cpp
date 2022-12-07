

#include <bits/stdc++.h>
using namespace std;
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
int main()
{
    string s;
    getline(cin,s);
    s+" ";
    vector<int>l=split(s);
    for(auto x:l){
        cout<<x<<"\n";
    }
    return 0;
}
