#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,a=0,b=0;
    string s,w;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9')
            {
                a++;
            }
        }
        if(a<2)
        {
            cout<<-1<<endl;
        }
        else{
            for(i=0;i<n;i++)
            {
                if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9')
                {
                    w+=s[i];
                    b++;
                }
                if(b==2)
                {
                    break;
                }
            }
            cout<<w<<endl;
        }
        w.clear();
        a=0;b=0;
    }
}
