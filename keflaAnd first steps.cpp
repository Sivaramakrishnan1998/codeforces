#include<bits/stdc++.h>
using namespace std;
int main()
{
  int size,value;
  cin>>size;
  int old,imax,ans;
  old= imax = ans = 0;
  while(size--)
  {
    cin>>value;
    if(value>=old)imax++;
    else
    imax=1;

    ans = max(imax,ans);

    old = value;

  }
cout<<ans;
  return 0;
}
