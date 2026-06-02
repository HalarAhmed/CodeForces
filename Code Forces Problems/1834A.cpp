using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t,n,el,negs,pos,sum=0,prod=1;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        sum=0;
        prod=1;
        negs=0;
        pos=0;
        int steps=0;
        for(int i=0;i<n;++i)
        {
            cin>>el;
            if(el==-1)
            {
                ++negs;
            }
            else
            {
                ++pos;
            }
            sum+=el;
            prod*=el;
        }
        if(sum>=0 && prod==1)
        {
            cout<<0<<endl;
        }
        else
        {
            while(negs>pos || negs%2==1)
            {
                --negs;
                ++pos;
                ++steps;
            }
            cout<<steps<<endl;
        }
    }
}