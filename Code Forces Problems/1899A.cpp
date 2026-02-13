using namespace std;
#include <bits/stdc++.h>
int main() 
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        if(n%3==0)
        {
            cout<<"Second"<<endl;
        }
        else
        {
            cout<<"First"<<endl;
        }
    }
}