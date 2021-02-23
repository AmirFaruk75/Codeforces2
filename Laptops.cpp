#include<bits/stdc++.h>
using namespace std;
struct laptop
{
    int a;
    int b;
};
bool compare(data c, data d)
{
	//for descending order replace with a.roll >b.roll
	if(c.a > d.a)
		return 1;
	else
		return 0;
}
int main()
{
    struct laptop x[100000],temp;
    int i,j,s,n,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i].a>>x[i].b;
    }
    sort(x,x+n,compare);
    for(i=0;i<n-1;i++)
    {
        if(x[i].a<x[i+1].a && x[i].b>x[i+1].b)
        {
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
}
