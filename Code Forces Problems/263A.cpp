using namespace std;
#include <iostream>
int main() 
{
    int arr[5][5];
    int rows=0,col=0;
    int moves;
    // outer loop:
    for(int i=0;i<5;i++)
    {
        // inner loop:
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                rows=i;
                col=j;
            }
        }
    }
    moves=abs(2-rows)+abs(2-col);
    cout<<moves<<endl;
}
