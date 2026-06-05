using namespace std;
#include<bits/stdc++.h>
int main()
{
    long long t,a,b,c,d,steps,dx,dy,temp;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>a>>b>>c>>d;
        steps=0;
        dx=a-c;
        dx=abs(dx);
        dy=b-d;
        dy=abs(dy);
        if((d<b) || (a+dy<c))
        {
            cout<<-1<<endl;
        }
        else
        {
            steps=dy+((a+dy)-c);
            cout<<steps<<endl;
        }
    }
}