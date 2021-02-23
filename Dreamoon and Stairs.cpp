#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,a,b,c=0;
    cin>>n>>m;
    if(n<m)
    {
        cout<<-1;
        return 0;
    }
    if(n%2==0)
    {
        a=n/2;
        for(i=0;i<n;i++)
        {
            if(a%m==0)
            {
                cout<<a;
                return 0;
            }
            else
            {
                b=a+1;
                a=b;
            }
        }
    }
    else if(n%2!=0)
    {
         a=(n/2)+1;
        for(i=0;i<n;i++)
        {
            if(a%m==0)
            {
                cout<<a;
                return 0;
            }
            else
            {
                b=a+1;
                a=b;
            }
        }
    }
}
