#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int t,n,k,i,j,a,b,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k>n)
        {
            cout<<k-n<<endl;
        }
        else{
            if(k%2==0 && n%2==0)
            {
                cout<<0<<endl;
            }
            else if(n%2!=0 && k%2!=0)
            {
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }
}
