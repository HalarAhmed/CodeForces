using namespace std;
#include <iostream>
int main() 
{
    int k,n,w;
    cin>>k>>n>>w;
    int total=0;
    for(int i=1;i<=w;i++)
    {
        total+=(i*k);
    }
    int borrow=0;
    if(total>n)
    {
        borrow=total-n;
        cout<<borrow<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}
