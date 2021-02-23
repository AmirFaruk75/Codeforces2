#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,m,i,j,a,b,c,d,e,f,g,h,x,y;
    cin>>n>>m;
    a=m/n;
    if(n==m)
    {
        cout<<0;
        return 0;
    }
    else if(n>m || m%n!=0)
    {
        cout<<-1;
        return 0;
    }
    else{
        for(i=1;;i++)
        {

            if(a%2==0)
            {
                a=a/2;
                if(a==1)
                {
                    cout<<i;
                    return 0;
                }
            }
            else{
                x=i-1;
                break;
            }
        }
        for(i=1;;i++)
        {
            if(a%3!=0)
            {
                break;
            }
            if(a%3==0)
            {
                a=a/3;
                if(a==1)
                {
                    cout<<x+i;
                    return 0;
                }
            }
        }
    }
    cout<<-1;
}
