#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,a=0,f=1,p[10000];
    for(int i=0;i<=10;i++)
    {
        n=a+i;
        for(int j=1;j<=n;j++)
        {
            f=f*j;
        }
        p[i]=f;
        cout<<p[i]<<endl;
        f=1;
    }
}
