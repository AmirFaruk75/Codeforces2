#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a[100000],i,j,b,c,d=0,e=0,f=0,g,h,k,l;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            if(n%2==0)
            {
                b=n/2;
                c=n/2;
            }
            else{
                b=(n/2)+1;
                c=n/2;
            }
        }
        for(j=0;j<n;j++)
        {
            if(a[j]%2==0)
            {
                d++;
            }
            else{
                e++;
            }
        }
        if(d!=b || e!=c)
        {
            cout<<-1<<endl;
            d=0;e=0;
            continue;
        }
        else{
            for(j=0;j<n;j++)
            {
                if(j%2==0)
                {
                    if(a[j]%2!=0)
                    {
                        f++;
                    }
                    else{
                        continue;
                    }
                }
                else if(j%2!=0)
                {
                    if(a[j]%2==0)
                    {
                        f++;
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        g=f/2;
        cout<<g<<endl;
        d=0;e=0;f=0;
    }
}
