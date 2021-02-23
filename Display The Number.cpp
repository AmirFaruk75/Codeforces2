#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,a,b,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==2)
        {
            cout<<1<<endl;
        }
        else if(n==3)
        {
            cout<<7<<endl;
        }
        else{
            if(n%2==0)
            {
                for(i=0;i<n/2;i++)
                {
                    cout<<1;
                }
                cout<<endl;
            }
            else{
                    cout<<7;
                for(i=0;i<(n/2)-1;i++)
                {
                    cout<<1;
                }
            cout<<endl;
            }
        }
    }
}
