#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int t,n,k,a,b,c=0,d,e,f,g,h,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;;i++)
        {
            if(n%k!=0)
            {
                a=n/k;
                c=c+(n%k);
                n=a*k;
            }
            else{
                n=n/k;
                c++;
            }
            if(n==0)
            {
                break;
            }
        }
        cout<<c<<endl;
        c=0;
    }
}
