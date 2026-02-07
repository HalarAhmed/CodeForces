using namespace  std;
#include<bits/stdc++.h>
int main() 
{
    int t;
    int n;
    int el;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;++i)
        {
            cin>>el;
            a.push_back(el);
        }
        /* if the first element is 1, the rest of the array can be sorted but if it's not 1 
        we don't have the access to move the very first element only 2nd till the 2nd last element can be moved
        [2,N-1]*/
        if(a[0]!=1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}