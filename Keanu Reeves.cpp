#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a=0,b=0,c,d,e,f,g,h;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            a++;
        }
        else{
            b++;
        }
    }
    if(a!=b)
    {
        cout<<1<<endl;
        cout<<s;
    }
    else{
        cout<<2<<endl;
        cout<<s[0]<<" ";
        for(i=1;i<n;i++)
        {
            cout<<s[i];
        }
    }
}
