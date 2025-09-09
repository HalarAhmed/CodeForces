#include <iostream>
using namespace std;
int main() 
{
    int t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        if(c==a+b)
        {
            cout<<"+"<<endl;
        }
        else if(c==a-b)
        {
            cout<<"-"<<endl;
        }
    }
    return 0;
}
