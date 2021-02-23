#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,i,j,a,b=0,c=0,d=0,e=0,f,g,h;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        a=s.length();
        for(i=0;i<a;i++)
        {
            if(s[i]=='L')
            {
                b++;
            }
            else{
                c++;
            }
        }
        if(b==0)
        {
            cout<<1<<endl;
        }
        else if(c==0)
        {
            cout<<a+1<<endl;
        }
        else{
            for(i=0;i<a-1;i++)
            {
                if(i==a-2)
                {
                    if(s[i]=='L' && s[i+1]=='L' && s[i]==s[i+1])
                    {
                        d++;
                        if(d>=e)
                        {
                            e=d+1;
                        }
                    }
                }
                if(s[i]=='L' && s[i+1]=='L' && s[i]==s[i+1])
                {
                    d++;
                }
                else{
                    if(d>=e)
                    {
                        e=d+1;
                    }
                    d=0;
                }
            }
            cout<<e+1<<endl;
        }
        b=0;c=0;d=0;e=0;
    }
}
