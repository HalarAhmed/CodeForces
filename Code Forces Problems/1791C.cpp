using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t,i,j,n,ans;
    string s;
    cin>>t;
    for(int k=0;k<t;++k)
    {
        cin>>n>>s;
        i=0;j=n-1;
        ans=n;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                ans=ans-2;
                ++i;
                --j;
            }
            else
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
}