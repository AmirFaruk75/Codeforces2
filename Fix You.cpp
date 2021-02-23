#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,m,i,j,a[1000][1000],b=0,d,e,f,g,h;
    char c[1000][1000];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin>>c[i][j];
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=m;j<=m;j++)
            {
                if(c[i][j]=='R')
                {
                    b++;
                }
            }
        }
        for(i=n;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(c[i][j]=='D')
                {
                    b++;
                }
            }
        }
        cout<<b<<endl;
        b=0;
    }
}
