#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a,b=0,c=0,d,e,f,g,h;
    string s;
    cin>>s;
    a=s.length();
    for(i=0;i<a;i++)
    {
        if(s[i]=='0')
        {
            b++;
        }
    }
    if(b==0)
    {
        for(i=0;i<a-1;i++)
        {
            cout<<s[i];
        }
    }
    else{
        for(i=0;i<a;i++)
        {
            if(s[i]=='0' && c==0)
            {
                c=1;
            }
            else{
                cout<<s[i];
            }
        }
    }
}
