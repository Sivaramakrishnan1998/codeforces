#include<bits/stdc++.h>
using namespace std;
int main()
{
  int iptr,k,l,m,n,d,value=0;
  cin>>k>>l>>m>>n>>d;
  for(iptr=1;iptr<=d;iptr++)
  {
    if(iptr%k==0||iptr%l==0||iptr%m==0||iptr%n==0)
    {
      value++;
    }
  }
cout<<value;
  return 0;
}
