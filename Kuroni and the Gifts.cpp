#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a[100000],b[100000],i,j,c,d,e,f,g,h;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}
