#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,c,d,e;
    cin>>n;
    if(n>=0)
    {
        cout<<n;
    }
    else{
        a=-(n%10);
        b=n/10;
        c=-(b%10);
        d=b/10;
        e=-d;
        if(e<1)
        {
            if(a>=c)
            {
                cout<<b;
                return 0;
            }
            else{
                cout<<-a;
                return 0;
            }
        }
        if(a>=c)
        {
            cout<<b;
        }

        else{
            cout<<d<<a;
        }
    }
}
