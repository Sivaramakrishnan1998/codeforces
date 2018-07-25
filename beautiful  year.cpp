#include<bits/stdc++.h>
using namespace std;

int split(int num)
{
  int temp = num,rem,Freq[10]={0};
  while(num>0)
  {
    rem = num%10;
    Freq[rem]++;
    if(Freq[rem]>1)
    {
      return 0;
    }
    num/=10;
  }
  return 1;
}

int main()
{
  int num,start,end,flag=0;
  cin>>num;

  for(start=num+1;flag!=1;start++)
  {
    if(split(start))
    {
      end = start;
      flag = 1;
    }
  }
  cout<<end;
  return 0;
}
