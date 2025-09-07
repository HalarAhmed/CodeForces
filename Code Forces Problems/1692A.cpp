using namespace std;
#include<iostream>
int main()
{
	int t;	// input data sets
	int a,b,c,d;	// a denotes taimur and other denote the remainig 3 participants
	int sum=0;	// participants that ran more than Taimur.
	cin>>t;
	for(int i=0;i<t;i++)
	{
		sum=0;
		cin>>a>>b>>c>>d;
		if(b>a)
		{
			sum++;
		}
		if(c>a)
		{
			sum++;
		}
		if(d>a)
		{
			sum++;
		}
		cout<<sum<<endl;
	}
}
