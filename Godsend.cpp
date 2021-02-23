#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,p[1000000],i,j,a=0,b=0,c,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p[i];
        if(p[i]%2!=0)
        {
            a++;
        }
        else{
            b++;
        }
    }
    if(a>0)
    {
        cout<<"First";
    }
    else{
        cout<<"Second";
    }
}
