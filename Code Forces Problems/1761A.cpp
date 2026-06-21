#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t,a,b,n;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n>>a>>b;
        if(a+b+2<=n)
        {
            cout<<"YES"<<endl;
        }
        else if(a==b && a==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
