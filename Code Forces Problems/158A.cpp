using namespace std;
#include <iostream>
#include<vector>
int main() 
{
    int n; // number of participants
    int k; // kth place
    int a;
    int count=0; // number of participants who will advance to the next round.
    vector<int>ai;
    // filling the array with the points scored by "n" participants.
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ai.push_back(a);
    }
    // checking the kth element
    for(int j=0;j<n;j++)
    {
        // checking till we traverse through elements less than kth place.
        if(ai[j]<ai[k-1])
        {
            break;
        }
        if(ai[k-1]==0 && ai[j]==0)
        {
            break;
        }
        ++count;
    }
    cout<<count<<endl;
}
