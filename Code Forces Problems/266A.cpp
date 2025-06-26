using namespace std;
#include<iostream>
int main()
{
	int n,moves=0;
	string s;
	cin>>n;
	cin>>s;
	if(n>=1 and n<=50)
	{
		for(int i=0;i<n-1;i++)
		{
			if(s[i]==s[i+1])
			{
				++moves;
			}
		}
		cout<<moves<<endl;
	}
}
