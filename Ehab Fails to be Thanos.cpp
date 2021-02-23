#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a[100000],b=0,c=0,d,e,f,g,h;
    cin>>n;
    for(i=0;i<2*n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+2*n);
    for(i=0;i<n;i++)
    {
        b=b+a[i];
    }
    for(i=n;i<2*n;i++)
    {
        c=c+a[i];
    }
    if(b==c)
    {
        cout<<-1<<endl;
    }
    else{
        for(i=0;i<2*n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
}
