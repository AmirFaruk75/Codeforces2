#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,a[100000],b,c,d,e,f,g,h,i,j;
    cin>>t;
    while(t--)
    {
        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        cout<<a[2]<<endl;
    }
}
