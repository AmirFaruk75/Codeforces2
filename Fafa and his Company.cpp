#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a,b,c=0,d;
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    cout<<c;
}
