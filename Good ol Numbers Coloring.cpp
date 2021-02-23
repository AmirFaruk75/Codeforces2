#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,a,b,i,j,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
       cin>>a>>b;
       c=__gcd(a,b);
       cout<<c;
    }
}
