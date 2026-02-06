using namespace std;
#include<bits/stdc++.h>
int main() 
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        vector<long long>b;
        cin>>n;
        for(int i=0;i<n;++i)
        {
            int el;
            cin>>el;
            b.push_back(el);
        }
        sort(b.begin(),b.end());
        int f=1;
        vector<int>freq;
        // in this loop we're counting the frequency of each element present in the array
        for(int i=1;i<n;++i)
        {
            if(b[i-1]==b[i])
            {
                ++f;
            }
            else
            {
                freq.push_back(f);
                f=1;
            }
        }
        freq.push_back(f);  /* the frequency of the last element does not get stored as the last
                               element doesn't get compared. 
                            */
        if(freq.size()==1)  // all the elements are same
        {
            cout<<"YES"<<endl;
        }
        else if(freq.size()==2) // only 2 elements are present. 
        {
            if(abs(freq[0]-freq[1])<=1) /* even place must be occupied by N1 and odd places by 
                                            N2
                                        */
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;   // this means the frequenct of N1 or N2 is greater 1 occupying more places than it should. 
            }
        }
        else    // if there are more than 2 elements then the condition cannot be fulfilled. 
        {
            cout<<"NO"<<endl;
        }
    }
}