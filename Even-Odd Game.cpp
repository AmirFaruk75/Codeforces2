#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,a[200005],i,j,sum=0,cum=0,b=0,c=0,e=0,o=0,m=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                e++;
            }
            else{
                o++;
            }
        }
        sort(a,a+n,greater<int>());
        if(o>=e)
        {
            m=e;
            for(i=0;i<n;i++)
            {
                if(a[i]%2==0)
                {
                    sum+=a[i];
                    a[i]=0;
                }
            }
            for(i=0;i<n;i++)
            {
                if(m==0)
                {
                    break;
                }
                if(a[i]%2!=0)
                {
                    cum+=a[i];
                    a[i]=0;
                    m--;
                }

            }
           b=o-e;
           for(i=0;i<n;i++)
           {
               if(b==0)
               {
                   break;
               }
               else
               {
                   if(a[i]%2!=0 && c==0)
                   {
                       b--;
                       c=1;
                   }
                   else if(a[i]%2!=0 && c==1)
                   {
                       cum+=a[i];
                       c=0;
                       b--;
                   }
               }
           }
        }
        else{
            m=o;
            for(i=0;i<n;i++)
            {
                if(a[i]%2!=0)
                {
                    cum+=a[i];
                    a[i]=0;
                }
            }
            for(i=0;i<n;i++)
            {
                if(m==0)
                {
                    break;
                }
                if(a[i]%2==0)
                {
                    sum+=a[i];
                    a[i]=0;
                    m--;
                }
            }
            b=e-o;
            for(i=0;i<n;i++)
            {
                if(b==0)
                {
                    break;
                }
                else{
                    if(a[i]%2==0 && c==0)
                    {
                        b--;
                        c=1;
                    }
                    else if(a[i]%2==0 && c==1)
                    {
                        sum+=a[i];
                        c=0;
                        b--;
                    }
                }
            }
        }
        if(sum>cum)
        {
            cout<<"Alice"<<endl;
        }
        else if(cum>sum)
        {
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Tie"<<endl;
        }
        sum=0;cum=0;c=0;e=0;o=0;

    }
}
