using namespace std;
#include<bits/stdc++.h>
int main() 
{
    int n;
    cin>>n;
    vector<int>A;
    for(int i=0;i<n;++i)    // Time Complexity = O(n)
    {
        int el;
        cin>>el;
        el=abs(0-el);
        A.push_back(el);
    }
    sort(A.begin(),A.end());    // Time Complexity = O(nlogn)
    cout<<A[0]<<endl;
    // Overall Time Complexity is O(nlogn)
    // Overall Space Complexity is O(n)
}