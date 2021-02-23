#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,a=0,b=5,c=0,d,e,f=0,g,h,j;
    cin>>n;
    for(i=0;;i++)
    {
        a=a+b;
        if(a>=n)
        {
            c++;
            break;
        }
        else{
            b=b*2;
            c++;
        }
    }
    d=pow(2,(c-1));
    e=a-n;
    for(i=0;;i++)
    {
        if(e<d)
        {
            break;
        }
        else{
            e=e-d;
            f++;
        }
    }
    if(f==4)
    {
        cout<<"Sheldon"<<endl;
    }
    else if(f==3)
    {
        cout<<"Leonard"<<endl;
    }
    else if(f==2)
    {
        cout<<"Penny"<<endl;
    }
    else if(f==1)
    {
        cout<<"Rajesh"<<endl;
    }
    else{
        cout<<"Howard"<<endl;
    }
}
