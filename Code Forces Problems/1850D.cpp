#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<long long>a(n);
        for(long long i=0;i<n;++i)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int count=0,min=0;
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
            for(long long i=1;i<n;++i)
            {
                if((abs(a[i-1]-a[i])<=k) && i==n-1)
                {
                    ++count;
                    ++count;
                    min=max(min,count);
                }
                else if(abs(a[i-1]-a[i])<=k)
                {
                    ++count;
                }
                else
                {
                    ++count;
                    min=max(min,count);
                    count=0;
                }
            }
            cout<<(n-min)<<endl;
        }
    }
}
