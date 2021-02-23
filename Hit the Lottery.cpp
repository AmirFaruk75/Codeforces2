#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,a=0,b,c,d,e,f,g,h,i;
    cin>>n;
    if(n%100==0)
    {
        cout<<a+n/100;
        return 0;
    }
    else{
        if(n>100)
        {
        a=a+n/100;
        n=n-(100*a);
        }
    }
    if(n%20==0)
    {
        cout<<a+(n/20);
        return 0;
    }
    else{
        if(n>20)
        {
        b=n/20;
        a=a+n/20;
        n=n-(20*b);
        }
    }
    if(n%10==0)
    {
        cout<<a+(n/10);
        return 0;
    }
    else{
        if(n>10)
            {
                c=n/10;
                a=a+n/10;
                n=n-(10*c);
            }
    }
    if(n%5==0)
    {
        cout<<a+(n/5);
        return 0;
    }
    else
    {
        if(n>5)
        {
            d=n/5;
            a=a+(n/5);
            n=n-(5*d);
        }
    }
    if(n<5)
    {
        cout<<a+n;
    }
}
