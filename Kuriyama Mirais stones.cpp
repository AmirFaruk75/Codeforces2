#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,v[100000],a[100000],pv[100000],pa[100000],m,l,r,type,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        a[i]=v[i];
    }
    sort(a+1,a+1+n);
    pv[1]=v[1];
    for(i=2;i<=n;i++)
    {
        pv[i]=pv[i-1]+v[i];
    }
    pa[1]=a[1];
    for(i=2;i<=n;i++)
    {
        pa[i]=pa[i-1]+a[i];
    }
    cin>>m;
    for(j=1;j<=m;j++)
    {
        cin>>type>>l>>r;
        if(type==1)
        {
            cout<<pv[r]-pv[l-1]<<endl;
        }
        else{
            cout<<pa[r]-pa[l-1]<<endl;
        }
    }
}
