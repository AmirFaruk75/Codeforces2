#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,b=0,c=0,d,e,f,g,h;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        if(n%2==0)
        {
            for(i=0;i<n;i++)
            {
                if(i%2!=0)
                {
                    if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9')
                    {
                        b++;
                    }
                }
            }
            if(b==(n/2))
            {
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else{
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9')
                    {
                        c=1;
                        break;
                    }
                }
            }
            if(c==1)
            {
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        b=0;c=0;
    }
}
