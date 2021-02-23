#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a,b=0,c,d,e,f,g,h;
    string s;
    cin>>s;
    a=s.length();
    for(i=0;i<a;i++)
    {
        if(s[i]=='a')
        {
            b++;
        }
    }
    c=a/2;
    if(b>c)
    {
        cout<<a;
    }
    else{
        cout<<b+(b-1);
    }
}
