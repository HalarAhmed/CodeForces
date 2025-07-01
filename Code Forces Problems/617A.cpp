using namespace std;
#include<iostream>
int main()
{
	int x;
	cin>>x;
	int mod,div;
	if(x>=1 and x<=1000000)
	{
	    if(x%5==0)
	    {
	        cout<<x/5;
	    }
	    else
	    {
			mod=x%5;
			x=x-mod;
			x=x/5;
			cout<<x+1;
	    }
			
	}
}
