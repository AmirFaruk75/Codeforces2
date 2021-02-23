#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,d,a[100000],b,c,e=0,f,g,h,i,j;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        b=a[i]-a[i+1];
        if(b<0)
        {
            continue;
        }
        else{
            c=b/d;
            e=e+(c+1);
            a[i+1]=a[i+1]+(d*(c+1));
        }
    }
    cout<<e;
}
