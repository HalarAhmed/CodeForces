using namespace std;
#include<bits/stdc++.h>
int main() 
{
	/*
	Intuition: we have 2 types of arrays only: either sorted or unsorted. 
	Sorted: if that's the case, no need to check 'k' simply print "YES".
	Unsorted: if that's the case, we need to check 'k'. 
			if: k=1-> then we cannot swap it as the maximum length subarray we can take
			  is 1, and one element cannot be swapped. Print "NO".
			if: k>1-> elements inside a subarray of length 2 can be swapped and we keep 
			  picking the subarrays of length regardless of 'k' until the whole array
			  is sorted. So the answer is always "YES".
	*/
    long long t,n,k,el;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        vector<long long>a;
        for(int i=0;i<n;i++)    // n
        {
            cin>>el;
            a.push_back(el);
        }
        vector<long long>copy_a=a;  // n
        sort(copy_a.begin(),copy_a.end());  // nlogn
        if(copy_a==a || k>1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    // TC= O(nlogn)
    // SC= O(n)
}
