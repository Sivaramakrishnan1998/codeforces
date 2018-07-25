#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,c,w,x,y,z;
  cin>>a>>b>>c;
  x = a*(b+c); w=(b*c)+a;
  y = a*b*c ; z=(a+b)*c;
  int add = a + b + c;
  cout<<max(max(max(w,x),max(y,z)),add);
  return 0;
}
