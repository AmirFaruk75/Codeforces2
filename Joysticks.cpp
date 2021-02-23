#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a1,a2,n,b,c,d,e,f,g,h,i,j;
    cin>>a1>>a2;
    for(i=1;;i++)
    {
        if(a1<2 && a2<2)
        {
            cout<<0;
            return 0;
        }
        if(a1>=a2)
        {
            a1=a1-2;
            a2=a2+1;
            if(a1<=0 || a2<=0)
            {
                cout<<i;
                break;
            }
        }
        else{
            a1=a1+1;
            a2=a2-2;
            if(a1<=0 || a2<=0)
            {
                cout<<i;
                break;
            }
        }
    }
}
