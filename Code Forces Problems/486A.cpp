#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n;
    long long ser1=0,ser2=0;
    cin>>n;
    long long half=n/2;
    if(n>=1 and n<=pow(10,15))
    {
        // even series:
        for(int i=0;i<n/2;i++)
        {
            ser1=half*(half+1);
        }
        half=n-half;
        // odd series:
        for(int i=0;i<half;i++)
        {
            ser2=-(half*half);
        }
        // adding both series:
        cout<<ser1+ser2<<endl;
    }
}
