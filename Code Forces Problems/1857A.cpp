using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n,sum=0;
        cin>>n;
        for(int i=0;i<n;++i)
        {
            int el;
            cin>>el;
            sum+=el;
        }
        if(sum%2==0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
}