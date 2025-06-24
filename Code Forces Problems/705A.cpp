using namespace std;
#include<iostream>
#include<string>
int main()
{
	int n;
	cin>>n;
	string start="I hate ";
	string mid="I love ";
	string result="";
	if(n>=1 && n<=100)
	{
		if(n==1)
		{
			cout<<"I hate it"<<endl;
		}
		else if(n==2)
		{
			cout<<"I hate that I love it "<<endl;
		}
		else if(n==3)
		{
			cout<<"I hate that I love that I hate it "<<endl;
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				if(i%2==0 && i==n-1)
				{
					result+=start;
				}
				else if(i%2==0 && i!=n-1)
				{
					result=result+start+"that ";
				}
				else if(i%2==1 && i==n-1)
				{
					result+=mid;
				}
				else if(i%2==1 && i!=n-1)
				{
					result=result+mid+"that ";
				}
			}
			result+=" it";
			cout<<result<<endl;
		}
	}
}
