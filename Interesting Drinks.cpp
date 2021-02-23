#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x[100000],q,m[100000],i,j,a,c=0,b,mid,begin,end;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i];
    }
    sort(x+1,x+n+1);
    begin=1;
    end=n;
    cin>>q;
    for(j=1;j<=q;j++)
    {
        cin>>m[j];
        i=n;
        while(begin<=end)
        {
            mid=(begin+end)/2;
            if(x[mid]>m[j])
            {
                i=mid;
                end=mid-1;
                c=1;
            }
            else
            {
                begin=mid+1;
            }
        }
        if(c==1){
        cout<<n-(n-(i-1))<<endl;
        c=0;
        }
        else{
            cout<<n<<endl;
        }
        begin=1;
        end=n;
    }

}
