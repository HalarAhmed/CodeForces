using namespace std;
#include<iostream>
int main()
{
	int a,b,count=0;
	cin>>a>>b;
if(a<=b and a>=1 and b<=10)
{
	while(true)
	{
		a=a*3;
		b=b*2;
		count++;
		if(a>b)
		{
			cout<<count<<endl;
			break;
		}
	}
}
}
