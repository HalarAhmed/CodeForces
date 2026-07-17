#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long t,n,size;
    cin>>t;
    while(t--)
    {
        cin>>n;
        size=0;
        for(int i=1;i<=n;++i)
        {
            if(n%i==0)
            {
                size+=1;
            }
            else
            {
                break;
            }
        }
        cout<<size<<endl;
    }
}