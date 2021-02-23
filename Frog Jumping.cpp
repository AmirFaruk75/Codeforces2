#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j,a,b,c,d,e,f,g,h,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>k;
        if(k%2==0)
        {
            c=k/2;
            d=k/2;
        }
        else{
            c=(k/2)+1;
            d=k/2;
        }
        e=c*a;
        f=d*b;
        cout<<e-f;
    }
}
