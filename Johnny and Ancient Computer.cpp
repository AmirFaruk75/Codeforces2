#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int t,a,b,c=0,d=0,e=0,f=0,g=0,h,i,j,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        else if(a>b)
        {
            for(j=0;;j++)
            {
                if(a%8!=0 && a%4!=0 && a%2!=0)
                {
                    cout<<-1<<endl;
                    break;
                }

                else{
                    if(a%8==0 && d==0)
                {
                    a=a/8;
                    if(a==b)
                    {
                        c++;
                        cout<<c<<endl;
                        break;
                    }
                    else{

                        if(a<b)
                        {
                            a=a*8;
                            d=1;
                        }
                        else{
                            c++;
                        }
                    }
                }
                else if(a%4==0 && e==0)
                {
                    a=a/4;
                    if(a==b)
                    {
                        c++;
                        cout<<c<<endl;
                        break;
                    }
                    else{
                         if(a<b)
                        {
                            a=a*4;e=1;
                        }
                        else{
                            c++;
                        }
                    }
                }
                else if(a%2==0)
                {
                    a=a/2;
                    if(a==b)
                    {
                        c++;
                        cout<<c<<endl;
                        break;
                    }
                    else{
                         if(a<b)
                        {
                            cout<<-1<<endl;
                            break;
                        }
                        else{
                            c++;
                        }
                    }
                }
            }
            }
            c=0;
            d=0;e=0;
        }
        else if(a<b)
        {
            for(j=0;;j++)
            {
                if(b%8!=0 && b%4!=0 && b%2!=0)
                {
                    cout<<-1<<endl;
                    break;
                }
                else{
                if(b%8==0 && f==0)
                {
                    b=b/8;
                    if(a==b)
                    {
                        c++;
                        cout<<c<<endl;
                        break;
                    }
                    else{
                         if(a>b)
                        {
                           b=b*8;
                           f=1;
                        }
                        else{
                            c++;
                        }
                    }
                }
                else if(b%4==0 && g==0)
                {
                    b=b/4;
                    if(a==b)
                    {
                        c++;
                        cout<<c<<endl;
                        break;
                    }
                    else{
                         if(a>b)
                        {
                            b=b*4;
                            g=1;
                        }
                        else{
                            c++;
                        }
                    }
                }
                else if(b%2==0)
                {
                    b=b/2;
                    if(a==b)
                    {
                        c++;
                        cout<<c<<endl;
                        break;
                    }
                    else{
                        if(a>b)
                        {
                            cout<<-1<<endl;
                            break;
                        }
                        else{
                            c++;
                        }
                    }
                }
            }
            }
            c=0;
            g=0;f=0;
        }
    }
}
