#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100000],p[100000],b,c,d,e,f,g,h,sum=0,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>p[i];
    }
    sum=sum+(a[0]*p[0]);
    b=p[0];
    for(i=1;i<n;i++)
    {
        if(p[i]<b)
        {
            b=p[i];
        }
        sum=sum+(a[i]*b);
    }
    cout<<sum;
}
