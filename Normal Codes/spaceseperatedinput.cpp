

#include <bits/stdc++.h>
using namespace std;
vector<string> split(string s){
    string temp="";
    char b=' ';
    vector<string>v;
    for(int i=0;i<s.size();i++){
        if(s[i]!=b){
            temp+=s[i];
        }
        else{
            v.push_back(temp);
            temp="";
        }
    }
    return v;
}
int main()
{
    string s;
    getline(cin,s);
    s+" ";
    vector<string>l=split(s);
    for(auto x:l){
        cout<<stoi(x)<<"\n";
    }
    return 0;
}
