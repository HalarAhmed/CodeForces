using namespace std;
#include<iostream>
int main()
{
	int n;	// number of levels in the game
	cin>>n;
	int arr[n+1]={0};	// filling the entire array with zeroes.
	int p,q;
	int levels;
	cin>>p;
	for(int i=0;i<p;i++)
	{
		cin>>levels;
		arr[levels]=1;
	}
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>levels;
		arr[levels]=1;
	}
	// Checking if any element in the array is still zero:
	for(int i=1;i<=n;i++)
	{
		if(arr[i]==0)
		{
			cout<<"Oh, my keyboard!"<<endl;
			return 0;
		}
	}
	cout<<"I become the guy."<<endl;
	return 0;
}
