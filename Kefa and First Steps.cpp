#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100000],i,j,b=0,c=0,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i+1]>=a[i])
        {
            b++;
        }
        else if(a[i]>a[i+1])
        {
            if(b>c)
            {
                c=b;
            }
            b=0;
        }
    }
    cout<<c+1;
}
