#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a,b,i,j=0,c,gcd,lcm,n,m;
    cin>>a>>b;
    n=a;m=b;
    if(b>a)
    {
        swap(a,b);
    }
    for(i=0;;i++)
    {
        if(a%b==0 && i==0)
        {
            j=1;
            break;
        }
        if(a%b==0)
        {
            break;
        }
        else{
            c=a%b;
            a=b;
            b=c;
        }
    }
    if(j==1)
    {
        cout<<b<<endl;
        cout<<(n*m)/b<<endl;
    }
    else{
        cout<<c;
        cout<<(n*m)/c<<endl;
    }
}
