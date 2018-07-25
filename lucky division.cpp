#include<bits/stdc++.h>
using namespace std;
int main()
{
  int num,num2,flag=0,rem,count=0,k=0;
  cin>>num;
  num2 = num;
  while(num>0)
  {
    rem = num%10;
    flag+=(rem==4||rem==7)?1:0;
    count++;
    num/=10;
  }
  if(num2%4==0||num2%7==0||num2%47==0||num2%74==0||num2%477==0)
    k =1;
  if(flag==count||k==1)
  printf("YES");
  else
  printf("NO");

  return 0;
}
