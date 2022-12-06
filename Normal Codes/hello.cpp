#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
    string str;
	vector<vector<string>>v;
	int q;
	cin>>q;
	cin.ignore();
	while(q>0){
	getline(cin,str);
    istringstream buf(str);
    istream_iterator<string> beg(buf), end;

    vector<string> t(beg, end); // done!
	v.push_back(t);
	q--;
	}
	for(auto&k :v){
    for(auto& s: k)
        cout  << stoi(s) << '\n';
	}
}