#include<bits/stdc++.h>
using namespace std;
int x,y,z,a,b,c,d,e,f,g,h,i,j;
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    d=a-x;
    if(d<0)
    {
        cout<<"NO";
        return 0;
    }
    else{
        e=d+b;
    }
    f=e-y;
    if(f<0)
    {
        cout<<"NO";
        return 0;
    }
    else{
        g=f+c;
    }
    if(g<z)
    {
        cout<<"NO";
        return 0;
    }
    else{
        cout<<"YES";
    }
}
