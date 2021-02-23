#include<bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(false);
      int n,i,j,a[100000],b=0,c=0;
      cin>>n;
      for(i=0;i<n;i++)
      {
            cin>>a[i];
            if(a[i]%2==0)
            {
                  b++;
            }
            else{
                  c++;
            }
      }
      if(b==1)
      {
            for(i=0;i<n;i++)
            {
                  if(a[i]%2==0)
                  {
                        cout<<i+1;
                        return 0;
                  }
            }
      }
      else{
            for(i=0;i<n;i++)
            {
                  if(a[i]%2!=0)
                  {
                        cout<<i+1;
                        return 0;
                  }
            }
      }
}
