#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long t,n,k,x;
    cin>>t;
    long long min_sum,max_sum;
    while(t--)
    {
        cin>>n>>k>>x;
        min_sum=(k*(k+1))/2;    // minimum achievable sum with 'k' integers
        max_sum=(n*(n+1))/2-((n-k)*(n-k+1))/2; // maximum achievable sum with 'k' integers
        if(x>=min_sum && x<=max_sum)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
