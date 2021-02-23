#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a=0,b=1,d,e,f,g,h;
    cin>>n;
    string s[n+1],c[n+1];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        if(n==1)
        {
            cout<<s[i];
            return 0;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[j]==s[i])
            {
                b++;
            }
        }
        d=n-b;
        if(b>d)
        {
            cout<<s[i];
            break;
        }
        else{
            for(j=i+1;j<n;j++)
            {
                if(s[i]!=s[j])
                {
                    cout<<s[j];
                    break;
                }
            }
            break;
        }
    }
}
