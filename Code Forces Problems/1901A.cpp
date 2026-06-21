#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t,n,x,d;
	cin>>t;
	for(int i=0;i<t;++i)
	{
	   cin>>n>>x;
	   vector<int>a(n);
	   int c=0;
	   for(int i=0;i<n;++i)
	   {
	       cin>>a[i];
	   }
	   d=a[0]; // distance btw 0 to first fuel station
	   c=max(c,d);
	   for(int i=1;i<n;++i)
	   {
	       d=a[i]-a[i-1]; // distance btw 2 consecutive fuel stations
	       c=max(c,d);
	   }
	   d=x-a[n-1];  // distance btw last fuel station and 'x'
	   d=2*d;   // 2 way distance btw last fuel station and 'x'
	   c=max(c,d);
	   cout<<c<<endl;
	}
}
