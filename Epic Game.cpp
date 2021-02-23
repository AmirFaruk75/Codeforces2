#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a,b,n,i,j,d=0,e,c=0,f,g,h;
    cin>>a>>b>>n;
    for(i=0;;i++)
    {
        if(n==0)
        {
            break;
        }
        if(c==0)
        {
            f=(__gcd(a,n));
            n=n-f;
            c=1;
        }
        else{
            f=(__gcd(b,n));
            n=n-f;
            c=0;
        }
    }
    if(c==1)
    {
        cout<<0;
    }
    else{
        cout<<1;
    }
}
