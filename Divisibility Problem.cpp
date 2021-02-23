#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,a,b,c,d,e;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<0;
        }
        if(a%b!=0 && a<b)
        {
            cout<<b-a;
        }
        if(a%b!=0 && a>b)
        {
            c=a/b;
            d=b*(c+1);
            e=d-a;
            cout<<e;
        }
    }
}
