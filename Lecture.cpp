#include<bits/stdc++.h>
using namespace std;
map<string,int> mark;
int main()
{
    int n,m,d=0,e,f,g,h,i,j;

    cin>>n>>m;
    string a[m+1],b[m+1],c[n+1];
    for(i=1;i<=m;i++)
    {
        cin>>a[i]>>b[i];
        mark[a[i]]=i;
    }
    for(i=1;i<=n;i++)
    {
        cin>>c[i];
        for(j=1;j<=m;j++)
        {
            if(c[i]==a[j])
            {
                d=a[j].length();
                e=b[j].length();
                if(d<=e)
                {
                    cout<<a[j]<<endl;
                }
                else{
                    cout<<b[j]<<endl;
                }
            }
        }

    }
}
