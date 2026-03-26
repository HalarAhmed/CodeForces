using namespace std;
#include<bits/stdc++.h>
int main() 
{
   int t,n;
   cin>>t;
   for(int k=0;k<t;++k)
   {
       vector<int>a;
       vector<int>b;
       cin>>n;
       // filling b;
       for(int i=0;i<n;++i) // Time Complexity = O(n)
       {
           int el;
           cin>>el;
           b.push_back(el);
       }
       // filling a:
       for(int i=0;i<n;++i) // Time Complexity = O(n)
       {
           if(i==0)
           {
               a.push_back(b[i]);
           }
           else
           {
               if(b[i]>=b[i-1])
               {
                   a.push_back(b[i]);
               }
               else
               {
                   a.push_back(b[i]);
                   a.push_back(b[i]);
               }
           }
       }
       // display the output:
       cout<<a.size()<<endl;
       for(int i=0;i<a.size();++i)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
   }
   // Overall Time Complexity = O(n)
   // Overall Space Complexity = O(n)
}