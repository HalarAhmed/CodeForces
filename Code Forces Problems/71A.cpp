using namespace std;
#include<iostream>
#include<string>
int main()
{
int n;
cin>>n;
if(n>=1 and n<=100)
{
for(int i=0;i<n;i++)
{
	string s;
	cin>>s;
	float size;
	size=s.size();
	if(size>10)
	{
		cout<<s[0];
		cout<<size-2;
		cout<<s[size-1];
		cout<<endl;
	}
	else
	{
		cout<<s<<endl;
	}
}
}
}
