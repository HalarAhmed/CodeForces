#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t,n,count,max_count;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        count=0;
        max_count=0;
        for(int i=1;i<n;++i)
        {
            if(s[i-1]=='<' && s[i]=='<')
            {
                ++count;
            }
            else if(s[i-1]=='>' && s[i]=='>')
            {
                ++count;
            }
            else
            {
                max_count=max(max_count,count);
                count=0;
            }
        }
        max_count=max(max_count,count);
        cout<<max_count+2<<endl;
    }
}