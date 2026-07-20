#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>a(n);
        int sum=0;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            sum+=a[i];
        }
        cout<<(sum%4==0?"YES":"NO")<<endl;
    }
}