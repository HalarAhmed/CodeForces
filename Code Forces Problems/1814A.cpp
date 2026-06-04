using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long int t,n,k,rem;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n>>k;
        if(n%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(n%k==0)
        {
            cout<<"YES"<<endl;
        }
        else if((n%2!=0) && (n%k!=0))
        {
            if((n-k)%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}