#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,s[10000],i,j,a=1000,b,c,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>s[j];
        }
        sort(s,s+n);
        for(j=0;j<n-1;j++)
        {
            b=s[j+1]-s[j];
            if(b<a)
            {
                a=b;
            }
        }
        cout<<a<<endl;
        a=1000;
    }
}
