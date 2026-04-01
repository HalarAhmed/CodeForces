using namespace std;
#include<bits/stdc++.h>
int main() 
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        vector<int>a;
        // filling array 'a':
        for(int i=0;i<n;++i)
        {
            int el;
            cin>>el;
            a.push_back(el);
        }
        sort(a.begin(),a.end());
        int mx=a[n-1];
        vector<int>b;
        vector<int>c;
        for(int i=0;i<n;++i)
        {
            if(a[i]!=mx)
            {
                b.push_back(a[i]);
            }
            else
            {
                c.push_back(a[i]);
            }
        }
        if(c.empty() || b.empty())
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0;i<b.size();++i)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<c.size();++i)
            {
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
}