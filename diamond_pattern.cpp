#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n;
    k=n/2;
    for (int i=0;i<(n/2);i++)
    {
    cout<<"-";
    }
    cout<<"*";
    for (int i=0;i<(n/2);i++)
    {
    cout<<"-";
    }
    cout<<"\n";
    for(int i=0;i<n/2;i++)
    {
        if(i==k-1){
            cout<<"*";
        }
        else{ cout<<"|";}
        for(int j=1;j<=k-i-2;j++)
        {
            cout<<" ";
        }
        if(i!=k-1)cout<<"*";
        for(int s=0;s<((2*i)+1);s++){
            cout<<" ";
        }
        if(i!=k-1){cout<<"*";}
          for(int j=1;j<=k-i-2;j++)
        {
            cout<<" ";
        }
        if(i==k-1){cout<<"*"<<"\n";}
        else{cout<<"|"<<"\n";}
    }
    for(int i=(n/2)-1;i>0;i--)
   {
   cout<<"|";
   for(int j=abs(i-((n/2)-1));j>0;j--)
   {
     cout<<" ";
    }
     cout<<"*";
    for(int s=((2*i)-1);s>0;s--){
      cout<<" ";
    }
   cout<<"*";
  for(int j=abs(i-((n/2)-1));j>=1;j--)
  {
    cout<<" ";
  }
  cout<<"|"<<"\n";
   }
    for (int i=0;i<(n/2);i++)
    {
    cout<<"-";
    }
    cout<<"*";
    for (int i=0;i<(n/2);i++)
    {
    cout<<"-";
    }
    cout<<"\n";
    return 0;
}