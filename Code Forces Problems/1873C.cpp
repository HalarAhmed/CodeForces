using namespace std;
#include<bits/stdc++.h>
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;++k)
    {
        char target[10][10];
        int score=0;
        // filling the 10x10 grid:
        for(int i=0;i<10;++i)
        {
            for(int j=0;j<10;++j)
            {
                char e;
                cin>>e;
                target[i][j]=e;
                // first ring:
                if(e=='X')
                {
                    if((i==0 || i==9) || (i!=0) && (j==0 || j==9))
                    {
                        score+=1;
                    }
                    // second ring:
                    else if(((i==1 || i==8) && (j>=1 && j<=8)) || ((i>=1 && i<=8) && (j==1 || j==8)))
                    {
                        score+=2;
                    }
                    // third ring:
                    else if(((i==2 || i==7) && (j>=2 && j<=7)) || ((i>=2 && i<=7) && (j==2 || j==7)))
                    {
                        score+=3;
                    }
                    // fourth ring:
                    else if(((i==3 || i==6) && (j>=3 && j<=6)) || ((i>=3 && i<=6) && (j==3 || j==6)))
                    {
                        score+=4;
                    }
                    // fifth ring:
                    else if(((i==4 || i==5) && (j>=4 && j<=5)) || ((i>=4 && i<=5) && (j==4 || j==5)))
                    {
                        score+=5;
                    }
                }
            }
        }
        cout<<score<<endl;
    }
}