#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,x,y,z,X,Y,Z;
  X=Y=Z=0;
  for(scanf("%d",&t);t--;)
  {
    cin>>x>>y>>z;
    X+=x;
    Y+=y;
    Z+=z;
  }
  
  (X==0&&Y==0&&Z==0)?cout<<"YES":cout<<"NO";
  return 0;
}
