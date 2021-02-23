#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    if(n%4==0)
    {
        cout<<0;
    }
    else if((n+1)%4==0)
    {
        cout<<0;
    }
    else{
        cout<<1;
    }
}
