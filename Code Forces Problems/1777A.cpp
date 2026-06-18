using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long t,n,ops;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        vector<long long>a(n);
        ops=0;
        for(long long j=0;j<n;++j)
        {
            cin>>a[j];
        }
        for(long long k=0;k<n-1;++k)
        {
            if(a[k]%2==0 && a[k+1]%2==0)
            {
                ++ops;
            }
            if(a[k]%2==1 && a[k+1]%2==1)
            {
                ++ops;
            }
        }
        cout<<ops<<endl;
    }
    
}