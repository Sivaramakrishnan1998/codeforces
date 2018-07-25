#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  int cap,num,diff,count=0;
  for(scanf("%d",&t);t--;)
  {

    cin>>num>>cap;
    count+= (cap -num)>1?1:0;

  }
  cout<<count;
  return 0;
}
