#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a,b,c,d,e,f=0,g,h,i,j;
    cin>>a>>b;
    if((a+b)<10)
    {
        cout<<"YES";
        return 0;
    }
    int l=a+b;
    if(a<10 && b<10)
    {
        cout<<"NO";
        return 0;
    }
    g=a;
    h=b;
    for(i=1;i<=9;i++)
    {
        if(g==0 || h==0)
        {
            break;
        }
        if(g%10==0 || h%10==0)
        {
            f++;
        }
        g=g/10;h=h/10;
    }
    if(f==0)
    {
        for(i=1;i<=9;i++)
        {
            if(b<=a)
            {
                if(b==0)
                {
                    break;
                }
                if(l%10==0)
                {
                    cout<<"NO";
                    return 0;
                }
                l=l/10;
                b=b/10;
                a=a/10;
            }
            else{
                if(a==0)
                {
                    break;
                }
                if(l%10==0)
                {
                    cout<<"NO";
                    return 0;
                }
                l=l/10;
                a=a/10;
                b=b/10;
            }
        }
        cout<<"YES";
        return 0;

    }
    for(i=1;i<=9;i++)
    {
        c=a%10;
        d=b%10;
        if(c==0)
        {
            if(d!=0)
            {
                cout<<"NO";
                return 0;
            }
        }
        else if(d==0)
        {
            if(c!=0)
            {
                cout<<"NO";
                return 0;
            }
        }
        else{
            if((c+d)>=10)
            {
                cout<<"NO";
                return 0;
            }
        }
        a=a/10;
        b=b/10;
        if(a/10==0 && b/10==0)
        {
            break;
        }
    }
    cout<<"YES";
}
