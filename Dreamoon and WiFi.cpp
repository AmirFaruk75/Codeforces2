#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p[10000],n,cum=0,sum=0,mum=0,i,j,a=0,b,c,d,e,f=1,g,h,m=0,k;
    string s,t;
    for(int i=0;i<=10;i++)
    {
        n=a+i;
        for(int j=1;j<=n;j++)
        {
            f=f*j;
        }
        p[i]=f;
        f=1;
    }
    cin>>s>>t;
    b=s.length();
    c=t.length();
    for(i=0;i<b;i++)
    {
        if(s[i]=='+')
        {
            sum=sum+1;
        }
        else{
            sum=sum-1;
        }
    }
    for(i=0;i<c;i++)
    {
        if(t[i]=='+')
        {
            cum=cum+1;
        }
        else if(t[i]=='-')
        {
            cum=cum-1;
        }
        else{
            mum=mum+1;
        }
    }
    if(mum==0)
    {
        if(sum==cum)
        {
            cout<<1;
            return 0;
        }
        else{
            cout<<0;
            return 0;
        }
    }
    else{
        k=mum;
        for(i=0;i<=k;i++)
        {
            cum=cum+mum;
            if(cum==sum)
            {
                m=p[k]/(p[i]*p[k-i]);
                break;
            }
            else{
                cum=cum-mum;
                mum=mum-2;
            }
        }
    }
    h=pow(2,k);
    double ans = (double)m / (double)h;
    printf("%.10lf",ans);
}
