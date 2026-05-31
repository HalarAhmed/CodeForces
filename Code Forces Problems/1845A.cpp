using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t,n,k,x;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n>>k>>x;
        vector<int>ans;
        if(x!=1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;++i)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if(x==1 && k==1)
        {
            cout<<"NO"<<endl;
        }
        else if(x==1 && k==2)
        {
            if(n%2==0)
            {
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=0;i<n/2;++i)
                {
                    cout<<2<<" ";
                }
                cout<<endl;
            }
            else 
            {
                cout<<"NO"<<endl;
            }
        }
        else if(x==1 && k>=3)
        {
            if(n%2==0)
            {
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=0;i<n/2;++i)
                {
                    cout<<2<<" ";
                }
                cout<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                int temp=(n-3)/2;
                cout<<temp+1<<endl;
                cout<<3<<" ";
                for(int i=0;i<temp;++i)
                {
                    cout<<2<<" ";
                }
                cout<<endl;
            }
        }
    }
}
