using namespace std;
#include<bits/stdc++.h>
int main() 
{
    int year;
    cin>>year;
    int temp=year;
    int el;
    bool same=false;
    ++year;
    while(true)
    {
        temp=year;
        vector<int>A;
        stack<int>digits;
        while(temp!=0)  // obtaining digits
        {
            el=temp%10;
            temp=temp/10;
            digits.push(el);
        }
        while(!digits.empty())  // storing them sequentially
        {
            A.push_back(digits.top());
            digits.pop();
        }
        // checking :
        for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<4;j++)
            {
                if(A[i]==A[j])
                {
                    same=true;
                }
            }
        }
        if(same==false)
        {
            cout<<year;
            return 0;
        }
        else
        {
            ++year;
            same=false;
        }
    }
}
