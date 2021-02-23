#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,a[100000],b[100000],c[100000],d[100000],e,f,g,h,k,l,i,j,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            c[i]=a[i];
        }
        sort(c,c+n);
        e=c[0];
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            d[i]=b[i];
        }
        sort(d,d+n);
        f=d[0];
        for(i=0;i<n;i++)
        {
            g=a[i]-e;
            h=b[i]-f;
            sum+=max(g,h);
        }
        cout<<sum<<endl;
        sum=0;
    }

}
