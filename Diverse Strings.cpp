#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a,b=0,c,d,e,f,g,h;
    string s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        sort(s.begin(),s.end());
        a=s.length();
        for(j=0;j<a-1;j++)
        {
            if(s[j+1]-s[j]!=1)
            {
                cout<<"NO"<<endl;
                b=1;
                break;
            }
        }
        if(b==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            b=0;
            continue;
        }
    }
}
