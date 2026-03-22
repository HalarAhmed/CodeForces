using namespace std;
#include<bits/stdc++.h>
int main() 
{
    int t,k,n;
    bool found=false;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        vector<int>a;
        found=false;
        cin>>n;
        cin>>k;
        for(int j=0;j<n;++j)
        {
            int el;
            cin>>el;
            a.push_back(el);
        }
        for(int j=0;j<n;++j)
        {
            if(k==a[j])
            {
                found=true;
                break;
            }
        }
        if(found)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}