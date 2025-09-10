using namespace std;
#include<iostream>
#include<vector>
int main()
{
	int n;
	string m;
	vector<string>magnets;
	int island=1;
	cin>>n;
	cin>>m;
	magnets.push_back(m);
	for(int i=1;i<n;i++)
	{
		cin>>m;
		magnets.push_back(m);
		if(magnets[i-1]!=m)
		{
			++island;
		}
	}
	cout<<island<<endl;
}
