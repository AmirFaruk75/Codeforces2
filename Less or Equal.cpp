#include<bits/stdc++.h>
using namespace std;
long long int n,k,a[200005],i,j,b=0,c,d,e,f,g,h;
int main()
{
    ios_base::sync_with_stdio(false);

    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(i=1;i<=n;i++)
    {
        if(a[i]<=a[k])
        {
            b++;
        }
    }
    if(k==0)
    {
        if(a[1]==1)
        {
            cout<<-1;
            return 0;
        }
        else{
            cout<<a[1]-1;
            return 0;
        }
    }
    if(b==k)
    {
        cout<<a[k];
    }
    else{
        cout<<-1;
    }
}
