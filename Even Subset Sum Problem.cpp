#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a[100000],i,j,b=0,c=0,d=0,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            {
                b++;
            }
            else{
                c++;
            }
        }
        if(c==0 && b<2)
        {
            cout<<-1<<endl;
        }
        else{
            if(c>0)
            {
                cout<<1<<endl;
                for(i=0;i<n;i++)
                {
                    if(a[i]%2==0)
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }
            }
            else{
                cout<<2<<endl;
                for(i=0;i<n;i++)
                {

                    if(a[i]%2!=0)
                    {
                        cout<<i+1<<" ";
                        d++;
                    }
                    if(d==2)
                    {
                        break;
                    }
                }
                cout<<endl;
            }
        }
        b=0;c=0;d=0;
    }
}
