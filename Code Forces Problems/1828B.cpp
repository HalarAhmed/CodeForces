#include<bits/stdc++.h>
using namespace std;
int main() 
{
	long long t,n,k;
	cin>>t;
	while(t--)
	{
        cin>>n;
        vector<long long>p(n);
        for(long long i=0;i<n;++i)  
        {
            cin>>p[i];
        }
        k=abs(1-p[0]);
        for(int i=1;i<n;++i)
        {
            k=gcd(abs((i+1)-p[i]),k);
        }
        cout<<k<<endl;
	}
}
