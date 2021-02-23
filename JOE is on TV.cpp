#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,b,c,d,e,f,g,h;
    cin>>n;
    double a=0;
    for(i=n;i>0;i--)
    {
        a=(double)a+(1/(double)i);
        if(i==1)
        {
            printf("%.10lf",a);
        }
    }

}
