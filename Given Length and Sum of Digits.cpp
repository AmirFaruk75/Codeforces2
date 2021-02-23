#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,s,i,j,a,b=0,c,d,e,f,g=0,h,q,w,r,t,p;
    cin>>n>>s;
    if(n==1 && s==0)
    {
        cout<<0<<" "<<0;
        return 0;
    }
    c=s;
    a=n*9;
    if(s==0 || s>a)
    {
        cout<<-1<<" "<<-1<<endl;
    }
    else{
        for(i=0;i<n;i++)
        {
            if(s<=9)
            {
                q=s;
                break;
            }
            else{
                s=s-9;
                g++;
            }
        }
        h=g*9;
        r=c-h;
        t=n-g;
        if(g==n-1)
        {
            cout<<q;
            for(i=1;i<=g;i++)
            {
                cout<<9;
            }
            cout<<" ";
        }
        else{
        cout<<1;
        p=t-2;
        for(i=1;i<=p;i++)
        {
            cout<<0;
        }
        cout<<r-1;
        for(i=1;i<=g;i++)
        {
            cout<<9;
        }
        cout<<" ";
        }
        for(i=0;i<n;i++)
        {
            if(c<=9)
            {
                d=c;
                break;
            }
            else{
                c=c-9;
                b++;
            }
        }
        for(i=1;i<=b;i++)
        {
            cout<<9;
        }
        cout<<d;
        e=b+1;
        f=n-e;
        for(i=1;i<=f;i++)
        {
            cout<<0;
        }
    }
}
