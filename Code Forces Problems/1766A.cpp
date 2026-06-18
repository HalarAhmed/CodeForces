using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long t,n,x,temp,ten;
    cin>>t;
    for(long long i=0;i<t;++i)
    {
        cin>>n;
        temp=n;
        ten=10;
        x=0;
        while(temp>10)
        {
            x=x+9;
            temp=temp/ten;
        }
        if(n<=10)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<x+temp<<endl;
        }
    }
}