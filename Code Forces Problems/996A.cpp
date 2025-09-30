using namespace std;
#include<iostream>
int main()
{
	int min=0;
	int n;
	cin>>n;
	int temp=n;
	while(temp!=0)
	{
		if(temp>=100)
		{
			temp=temp-100;
			++min;
		}
		else if(temp>=20)
		{
			temp=temp-20;
			++min;
		}
		else if(temp>=10)
		{
			temp=temp-10;
			++min;
		}
		else if(temp>=5)
		{
			temp=temp-5;
			++min;
		}
		else
		{
			temp=temp-1;
			++min;
		}
	}
	cout<<min<<endl;
}
