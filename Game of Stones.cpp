#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,a,b,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<"Second"<<endl;
        }
        else if(n%7==0 || n%7==1)
        {
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
}
