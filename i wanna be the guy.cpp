#include<bits/stdc++.h>
using namespace std;
int main()
{
  int total,i,flag=0,one,two,t;
  cin>>total;
  int Freq[total+1]={0};
  cin>>one;int arr[one];
  for(i=0;i<one;cin>>t,Freq[t]++,i++);

  cin>>two;
  for(i=0;i<two;cin>>t,Freq[t]++,i++);

  for(i=1;i<=total;i++)
  {
    if(Freq[i]==0)
      flag =1;
  }
  (flag==0)?cout<<"I become the guy.":cout<<"Oh, my keyboard!";

  return 0;
}
