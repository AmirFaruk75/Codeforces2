#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,d[100000],a[100000],b[100000],c,e=0,f,g,h=0,i,j,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>d[i];
    }
    sort(d,d+n, greater<int>());
    c=d[0];
    for(i=0;i<n;i++)
    {
        if(d[i]==d[i+1])
        {
            continue;
        }
        if(c%d[i]==0)
        {
            d[i]=d[i]-d[i];
        }

    }
    for(i=0;i<n;i++)
    {
        if(d[i]==0)
        {
            continue;
        }
        else{
            cout<<c<<" "<<d[i];
            break;
        }
    }
}
