#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[1000000],i,j,b,c,d,e,f,g,h,sum=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        if(sum%n==0)
        {
            cout<<sum/n<<endl;
            sum=0;
        }
        else{
            cout<<sum/n+1<<endl;
            sum=0;
        }
    }
}
