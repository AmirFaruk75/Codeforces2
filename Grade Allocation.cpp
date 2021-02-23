#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a[100000],m,i,j,b,c,d,e,f,g,h,sum=0;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            sum=sum+a[i];
        }
        b=m-a[n-1];
        if(sum>=b)
        {
            cout<<a[n-1]+b<<endl;
        }
        else{
            cout<<a[n-1]+sum<<endl;
        }
        sum=0;
    }
}
