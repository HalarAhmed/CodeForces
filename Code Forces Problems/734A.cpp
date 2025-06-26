using namespace std;
#include<iostream>
#include<string>
#include<algorithm>
int main()
{
	int n;
	int countA=0,countD=0;
	string s;
	cin>>n;
	if(n>=1 and n<=100000)
	{
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='A' or s[i]=='a')
			{
				countA++;
			}
			else if(s[i]=='D' or s[i]=='d')
			{
				countD++;
			}
		}
		if(countA>countD)
		{
			cout<<"Anton"<<endl;
		}
		else if(countD>countA)
		{
			cout<<"Danik"<<endl;
		}
		else
		{
			cout<<"Friendship"<<endl;
		}
	}
}
