#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],begin,end,mid,m,x,i,q=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    cin>>x;
    begin=1;
    end=n;


    while(begin<=end)
    {
        mid=(begin+end)/2;
        if(a[mid]>x)
        {
            i=mid;
            end=mid-1;
        }
        else{
            begin=mid+1;
        }
    }
    cout<<n-(i-1);

}
