#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t,n,time,max_time;
	string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        time=0;
        max_time=0;
        int i=0;
        int count=0;
        while(i<s.length())
        {
            count=0;
            while(s[i]=='#' && i<s.length())
            {
                count+=1;
                ++i;
            }
            if(count==1 || count==2)
            {
                time=1;
                max_time=max(max_time,time);
            }
            else
            {
                time=ceil(float(count)/2);
                max_time=max(max_time,time);
            }
            ++i;
        }
        cout<<max_time<<endl;
    }
}