vector<int> split(string s){
    char b=' ';
    string temp="";
    vector<int> a;
    for(int i=0;i<s.size();i++){
       if(s[i]!=b){
           temp=temp+s[i];
       }
       else{
           cout<<temp<<" ";
           a.push_back(stoi(temp));
           temp="";
       }
    }
    return a;
}
////
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