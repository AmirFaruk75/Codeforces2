#include<bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(false);
      int n,i,j,a,b=0,c,d,e,f,g,h;
      string s;
      cin>>n>>s;
      for(i=n-1;i>=0;i--)
      {
            if(s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8')
            {
                  b=b+(i+1);
            }
      }
      cout<<b;
}
