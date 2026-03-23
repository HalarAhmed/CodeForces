using namespace std;
#include<bits/stdc++.h>
int main() 
{
    int t,n,sum=0;
    cin>>t;
    int el;
    for(int i=0;i<t;++i)
    {
        sum=0;
        cin>>n;
        for(int j=0;j<n-1;++j)
        {
            cin>>el;
            sum+=el;
        }
        sum=-sum;
        cout<<sum<<endl;
    }
}