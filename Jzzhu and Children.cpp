#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,a[10000],b[10000],c[10000],d,e,f,g,h,i,j;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%m==0)
        {
            b[i]=a[i]/m;
        }
        else{
            b[i]=(a[i]/m)+1;
        }
    }
    for(i=0;i<n;i++)
    {
        c[i]=b[i];
    }
    sort(c,c+n);
    for(i=n-1;i>=0;i--)
    {
        if(b[i]==c[n-1])
        {
            cout<<i+1;
            break;
        }
    }
}
