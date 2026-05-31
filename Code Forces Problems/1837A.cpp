using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t;
    cin>>t;
    int x,k;
    for(int i=0;i<t;++i)
    {
        cin>>x>>k;
        if(x==k)
        {
            cout<<2<<endl;
            cout<<x-1<<" ";
            cout<<1<<endl;
        }
        else if(x%k==0)
        {
            cout<<2<<endl;
            cout<<k+1<<" "<<x-(k+1)<<endl;
        }
        else
        {
            cout<<1<<endl;
            cout<<x<<endl;
        }
    }
}