#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a,b=0,c=0,d,e,f=0,g,h;
    string s;
    cin>>s;
    a=s.length();
    for(i=0;i<a;i++)
    {
        if(i==a-1)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
            {
                f=1;
            }
            else{
                b=b+2;
                if(b>c)
                {
                    c=b;
                }
            }
        }
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            b++;
            if(b>c)
            {
                c=b;
            }
            b=0;
        }
        else{
            b++;
        }
    }
    cout<<c;
}
