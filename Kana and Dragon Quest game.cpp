#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,m,n,i,j,k,a,b,c=0,d,e,f;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>n>>m;
        for(j=0;j<30;j++)
        {

            if(n==0)
            {
                a=x;
                break;
            }
            a=(x/2)+10;
           if(a<x)
           {
               x=a;
           }
           else{
                a=x;
            break;
           }
           if(j==n-1)
           {
               break;
           }
        }
        for(k=0;k<30;k++)
        {
            if(m==0)
            {
                break;
            }
            a=a-10;
            if(k==m-1)
            {
                break;
            }

        }
        if(a<1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
