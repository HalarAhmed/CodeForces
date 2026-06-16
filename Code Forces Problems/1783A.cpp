#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t,n,sum,temp;
    bool yes;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        vector<int>a(n);
        // taking input:
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        int max=a[n-1];
        int min=a[0];
        if(min==max)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            a.insert(a.begin(),max);
            a.pop_back();
            for(int i=0;i<n;++i)
            {
               cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}
