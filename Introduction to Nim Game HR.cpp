#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int i,x=0,c;

        for(i=1;i<=n;i++)
        {
            cin >> c;

            x = x^c;
            cout<<x;
        }
        //if(x==0)cout << "Second\n";
        //else cout << "First\n";
    }
    return 0;
}
