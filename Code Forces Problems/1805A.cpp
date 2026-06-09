using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t,n,el,x;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        vector<int>a;
        x=0;
        cin>>n;
        for(int i=0;i<n;++i)
        {
            cin>>el;
            a.push_back(el);
        }
        for(int i=0;i<n;++i)
        {
            x=x^a[i];
        }
        if(n%2==0)
        {
            if(x==0)
            {
                cout<<x<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            cout<<x<<endl;
        }
    }
}