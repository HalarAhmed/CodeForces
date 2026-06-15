using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t,n,x,y;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        vector<int>a(n);
        bool found=false;
        for(int j=0;j<n;++j)
        {
            cin>>a[j];
        }
        for(int k=0;k<n;++k)
        {
            x=0;    // 2s before 'k'
            y=0;    // 2s after 'k'
            for(int j=0;j<=k;++j)
            {
                if(a[j]==2)
                {
                    ++x;
                }
            }
            for(int j=k+1;j<n;++j)
            {
                if(a[j]==2)
                {
                    ++y;
                }
            }
            if(x==y)
            {
                cout<<++k<<endl;
                found=true;
                break;
            }
        }
        if(!found)
        {
            cout<<-1<<endl;
        }
    }
}