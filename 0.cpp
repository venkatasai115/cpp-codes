#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "Hi", "How are you ?", "whats up"};
    int a;
    cin >> a;
    for (const string& word : msg)
    {
        cout << word << endl;
    }
    cout<< a;
    cout << endl;
}