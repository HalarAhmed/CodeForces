using namespace std;
#include<iostream>
int main()
{
	int w;
	cin>>w;
	if(w>=1 || w<=100)
	{
		if(w==2)
		{
			cout<<"NO";
		}
		else if(w!=2 && w%2==0)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
	}
}
