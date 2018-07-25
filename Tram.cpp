#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,sum=0,max=-1,enter,Exit;
  for(scanf("%d",&t);t--;)
  {
    cin>>Exit>>enter;

    sum+=-Exit+enter;
    
    if(sum>max)
    max=sum;
  }
  cout<<max;
  return 0;
}
