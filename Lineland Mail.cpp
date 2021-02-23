#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100000],i,j,b,c,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b=a[1]-a[0];
    c=a[n-1]-a[0];
    cout<<b<<" "<<c<<endl;
    for(i=1;i<n-1;i++)
    {
        d=a[i]-a[i-1];
        e=a[i+1]-a[i];
        if(d>=e)
        {
            cout<<e<<" ";
        }
        else{
            cout<<d<<" ";
        }
        f=a[i]-a[0];
        g=a[n-1]-a[i];
        if(f>=g)
        {
            cout<<f<<endl;
        }
        else
        {
            cout<<g<<endl;
        }
    }
    cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]<<endl;
}
