#include <bits/stdc++.h>
using namespace std;
int k = 1;
bool isPower(int x)
{
    return (ceil(log2(x)) == floor(log2(x)));
}
string rec(int n, vector<string> &v)
{
    v[1] = "(2^0)";
    for (int i = 2; i <= n; i++)
    {
        if (isPower(i))
        {
            int p = log(i) / log(2);
            v[i] = "(2^(" + v[p] + "))";
            k = i;
        }
        else
        {
            v[i] = v[k] + "+" + v[i - k];
        }
    }
    return v[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s = " ";
    vector<string> v(n + 1, s);
    cout << rec(n, v);
    return 0;
}
