#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int m,l,r,i,j,a[100005],b,pa[100005];
    string s;
    cin>>s;
    b=s.length();
    a[-1]=0;
    for(i=0;i<b-1;i++)
    {

        if(s[i]==s[i+1])
        {
            a[i]=1;
        }
        else{
            a[i]=0;
        }
    }
    pa[-1]=a[-1];
    for(i=-1;i<b-1;i++)
    {
        pa[i]=pa[i-1]+a[i];
    }

    cin>>m;
    for(j=0;j<m;j++)
    {
        cin>>l>>r;
        cout<<pa[r-2]-pa[l-2]<<endl;
    }
}
