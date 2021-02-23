#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int s,v1,v2,t1,t2,i,j,a,b,c;
    cin>>s>>v1>>v2>>t1>>t2;
    a=(v1*s)+(t1*2);
    b=(v2*s)+(t2*2);
    if(a<b)
    {
        cout<<"First";
    }
    else if(a>b)
    {
        cout<<"Second";
    }
    else{
        cout<<"Friendship";
    }
}
