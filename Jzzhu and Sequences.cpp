#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int x,y,n,f[100000],a,b,c,d=1000000007,e,g,h;
    cin>>x>>y>>n;
    int i,j;
    f[1]=x;f[2]=y;
    for(i=3;i<=6;i++)
    {
        f[i]=f[i-1]-f[i-2];
    }
    a=n-1;
    b=a%6;
    c=f[b+1];
    if(c>=0)
    {
        cout<<c%d;
    }
    else{
        if(c<-d)
        {
            e=(-c)/d;
            if((-c)%d==0)
            {
                e=e;
            }
            else{
                e=e+1;
            }
            d=d*e;
            cout<<c+d;
        }
        else{
            cout<<c+d;
        }

    }

}
