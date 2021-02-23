#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,x,d[100000],a=0,b,e,f,g,h,i,j;
    char c[1000];
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>c[i]>>d[i];
    }
    for(i=0;i<n;i++)
    {
        if(c[i]=='-')
        {
            x=x-d[i];
            if(x<0)
            {
                a++;
                x=x+d[i];
            }
        }
        else{
            x=x+d[i];
        }
    }
    cout<<x<<" "<<a;
}
