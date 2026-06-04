using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t,n,bs,el;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        bs=0;
        vector<int>ans;
        for(int i=0;i<n;++i)
        {
            cin>>el;
            if(el==0)
            {
                ++bs;
            }
            else
            {
                ans.push_back(bs);
                bs=0;
            }
        }
        ans.push_back(bs);
        if(n!=1)
        {
            sort(ans.begin(),ans.end());
            cout<<ans.back()<<endl;
        }
        else
            cout<<ans.back()<<endl;
    }
}