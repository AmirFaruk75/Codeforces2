#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,l,r,i,j,a,b,c,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>l>>r;
        a=l*2;
        if(r<a)
        {
            cout<<-1<<" "<<-1<<endl;
        }
        else{
            cout<<l<<" "<<a<<endl;
        }
    }
}
