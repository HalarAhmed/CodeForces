using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long t,n,el;
    bool found;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        vector<long long>a(n);
        found=false;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;++j)
        {
            for(int k=j+1;k<n;++k)
            {
                if(gcd(a[j],a[k])<=2)
                {
                    found=true;
                }
            }
            if(found==true)
            {
                cout<<"YES"<<endl;
                break;
            }
        }
        if(found==false)
        {
            cout<<"NO"<<endl;
        }
    }
}