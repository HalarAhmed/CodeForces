#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long t,n,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long long>a(n);
        bool found=false;
        sum=0;
        for(long long i=0;i<n;++i)
        {
            cin>>a[i];
            sum+=a[i];
        }
        long long n_sum=(n*(n+1))/2;
        if(sum<n_sum)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            long long need=0;
            long long prefix_sum=0;
            for(long long i=0;i<n;++i)
            {
                prefix_sum+=a[i];
                need=((i+1)*(i+2))/2;
                if(prefix_sum<need)
                {
                    found=true;
                    break;
                }
            }
            if(found)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
}
