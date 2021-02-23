#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a,b=0,c,d,e,f,g,h;
    string s,t;
    cin>>s>>t;
    a=s.length();
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(s[i]==s[j])
            {
                b=1;
                break;
            }
        }

    }
}
