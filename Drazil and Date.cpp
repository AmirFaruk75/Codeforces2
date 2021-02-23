#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int a,b,s,i,j,c,d,e,f,g,h,n;
    cin>>a>>b>>s;
    if(a<0)
    {
        a=a*(-1);
    }
    if(b<0)
    {
        b=b*(-1);
    }
    c=a+b;
    if(s<c)
    {
        cout<<"NO";
    }
    else if(s==c)
    {
        cout<<"YES";
    }
    else{
        d=s-c;
        if(d%2==0)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}
