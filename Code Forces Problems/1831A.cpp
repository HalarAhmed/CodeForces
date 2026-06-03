using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t,n,el,x;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        for(int i=0;i<n;++i)
        {
            cin>>el;
            x=(n+1)-el;
            cout<<x<<" ";
        }
        cout<<endl;
    }
}