#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a,b;

    string s,t,c,d,e,f;

    cin>>s>>t>>c>>d>>e>>f;

    if(s[0]==t[0] || s[0]==c[0] || s[0]==d[0] || s[0]==e[0] || s[0]==f[0])
    {
        cout<<"YES";
        return 0;
    }
    else if(s[1]==t[1] || s[1]==c[1] || s[1]==d[1] || s[1]==e[1] || s[1]==f[1])
    {
        cout<<"YES";
        return 0;
    }
    else{
        cout<<"NO";
    }

}
for(j=i+0;;j++)
        {
            if(h>c)
            {

                if(p==0)
                {
                    sum=sum+c;
                }
                if(b<2)
                {
                    cout<<sum<<" ";
                    break;
                }
                sum=sum+h;
                b=b-2;
                p=p-1;
            }
        }
        }
