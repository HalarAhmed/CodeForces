#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t,n,k;
    string s;
    bool flag;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        flag=true;
        for(int i=0;i<n;++i)
        {
            if(s[i]=='1' && i+k>=n)
            {
                flag=false;break;
            }
            else if(s[i]=='1')
            {
                s[i]='0';
                if(s[i+k]=='1')
                {
                    s[i+k]='0';
                }
                else
                {
                    s[i+k]='1';
                }
            }
        }
        if(flag==false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
