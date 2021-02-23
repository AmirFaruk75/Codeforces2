#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int i,j,a,b=0,c=0,d=0,e,f,g,h;
    string s,t;
    cin>>s;
    t=s;
    sort(s.begin(),s.end());
    a=s.length();
    for(i=0;i<a;i++)
    {
        if(s[i]<'a')
        {
            continue;
        }
        for(j=i+1;j<a;j++)
        {
            if(s[i]==s[j])
            {
                b++;
                s[j]=s[j]-'35';
            }
        }
        b++;
        if(b%2==0)
        {
            c++;
        }
        else{
            d++;
        }
        b=0;
    }
    if(a%2==0)
    {
        if(d==0)
        {
            cout<<"First";
            return 0;
        }
    }
    else{
        if(d==1)
        {
            cout<<"First";
            return 0;
        }
    }
    if(a%2!=0)
    {
        cout<<"First";
        return 0;
    }
    else{
        cout<<"Second";
        return 0;
    }
}
