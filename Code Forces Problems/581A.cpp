using namespace std;
#include<iostream>
int main()
{
	int a,b; // a denotes red, b denotes blue:
	cin>>a>>b;
	int pcount=0;
	int scount=0;
	if(a>=1 && b<=100)
	{
		while(true)
		{
			if(a==0)
			{
				b/=2;
				scount+=b;
				break;
			}
			else if(b==0)
			{
				a/=2;
				scount+=a;
				break;
			}
			a--;
			b--;
			++pcount;
		}
		cout<<pcount<<" "<<scount<<endl;
	}
}
