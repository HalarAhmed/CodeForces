#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t,n,k;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    cin>>s;
	    map<char,int> freq;
	    // counting the frequency of each character in the given string 
	    for(char c:s)
	    {
	        ++freq[c];
	    }
	    int odd=0;
	    bool palindrome=true;
	    // checking the parity of frequency of each character
	    for(auto [ch,count]:freq)
	    {
	        if(count%2==1)
	        {
	            ++odd;
	        }
	    }
	    // checking if number of odd characters exceed allowed limit i-e k+1:
	    if(odd>k+1)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
}
