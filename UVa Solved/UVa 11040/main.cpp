#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g[10][10];
        for(int i=0; i<9; i+=2)
        {
            for(int j=0; j<=i; j+=2)
            {
                cin>>g[i][j];
            }
        }

        int a,b,c;
        for(int i=8; i>0; i-=2)
        {
            for(int j=0; j<i; j+=2)
            {
                a=g[i][j];
                b=g[i][j+2];
                c=g[i-2][j];
                g[i][j+1]=(c-a-b)/2;
                g[i-1][j]=g[i][j]+g[i][j+1];
                g[i-1][j+1]=g[i][j+1]+g[i][j+2];
            }
        }
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<=i; j++)
            {
                if(j) cout<<" ";
                cout<<g[i][j];
            }
            cout<<endl;
        }
    }
}
