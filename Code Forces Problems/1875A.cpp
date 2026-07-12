#include <bits/stdc++.h>
using namespace std;
int main() 
{
	long long t,a,b,n;
	long long time;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>n;
	    vector<long long>x(n);
	    time=0;
	    for(int i=0;i<n;++i)
	    {
	        cin>>x[i];
	    }
	    time=b;
	    for(int i=0;i<n;++i)
	    {
	       time+=min(1+x[i]-1,a-1);
	    }
	    cout<<time<<endl;
	}
}
