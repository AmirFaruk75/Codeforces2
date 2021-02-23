#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a=0,i,j,b=0,c,d,e,f,g,h[100000],m[100000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>h[i]>>m[i];
    }
    for(i=0;i<n;i++)
    {
        if(h[i]==h[i+1] && m[i]==m[i+1])
        {
            a++;
            continue;
        }
        if(a>b)
        {
            b=a;
        }
        a=0;
    }
    if(h[n-1]==0 && m[n-1]==0)
    {
        cout<<n;
        return 0;
    }
    cout<<b+1;
}
