using namespace std;
#include<iostream>
#include<vector>
int main()
{
    vector<int>p;// vector for friends who recieved gifts
    vector<int>ans;// vector for answer
    int n;// number of friends
    int pi; // friend number who recieved the gift
    cin>>n;
    // filling the number of friends who recieved gigts
    for(int i=0;i<n;i++)
    {
        cin>>pi;
        p.push_back(pi);
    }
    // locating i in pi.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(p[j]==i+1)
            {
                ans.push_back(j+1);
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}
