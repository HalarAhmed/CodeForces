#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t,n,neg_count,pos_count;
	cin>>t;
	while(t--)
	{
	    neg_count=0;
	    pos_count=0;
	    cin>>n;
	    vector<int>a(n);
	    for(int i=0;i<n;++i)
	    {
	        cin>>a[i];
	        if(a[i]==-1)
	        {
	            ++neg_count;
	        }
	        else
	        {
	            ++pos_count;
	        }
	    }
	    if(n%2==1)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        if((n/2)%2==0 && neg_count%2==0)
	        {
	            cout<<"YES"<<endl;
	        }
	        else if((n/2)%2==0 && neg_count%2!=0)
	        {
	            cout<<"NO"<<endl;
	        }
	        else if((n/2)%2!=0 && neg_count%2!=0)
	        {
	            cout<<"YES"<<endl;
	        }
	        else if((n/2)%2!=0 && neg_count%2==0)
	        {
	            cout<<"NO"<<endl;
	        }
	    }
	}
}