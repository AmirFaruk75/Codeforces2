#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,x,i,j,a=2,b=1,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if(n<=x)
        {
            if(n==1 || n==2)
            {
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else{
            for(i=0;;i++)
            {
                if(a>=n)
                {
                    break;
                }
                else{
                        a=a+x;
                    b++;
                }
            }
            cout<<b<<endl;
        }
        a=2;b=1;
    }
}
