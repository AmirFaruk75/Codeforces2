#include<bits/stdc++.h>
using namespace std;
long long int SOD(long long n)
{
    long long int sum=0;
    while(n)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    long long i,k,n;
    cin>>k;
    for(long long int i=19;;i++)
    {
        if(SOD(i)==10)
        {
            k--;
            if(k==0)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    }
    cout<<n;
}
