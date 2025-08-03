using namespace std;
#include<iostream>
int main()
{
	int n;
	int i;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>i;
		if(i==1)
		{
			cout<<"HARD";
			return 0;
		}
		else if(i!=0)
		{
			return 0;
		}
	}
	cout<<"EASY";
}
