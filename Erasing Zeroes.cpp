#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,a,b,c,d=0;
    string s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s;
        a=s.length();
        for(j=0;j<a;j++)
        {
            if(s[j]=='1')
            {
                b=j;
                break;
            }
        }
        for(j=a-1;j>=0;j--)
        {
            if(s[j]=='1')
            {
                c=j;
                break;
            }
        }

        for(j=b;j<c;j++)
        {
            if(s[j]=='0')
            {
                d++;
            }
        }

        cout<<d<<endl;
        d=0;
        b=0;c=0;
    }
}
