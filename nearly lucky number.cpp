#include<bits/stdc++.h>
using namespace std;
int main()
{
  char num[30],rem;
  int flag=0,count=0,k=0,i=0;
  cin>>num;

while(num[i])
{
  rem = num[i];
  count+=(rem=='4'||rem=='7')?1:0;
  i++;
}

  if((count==4||count==7||count==47||count==74||count==477)&&count>0)
    k =1;
  if(k==1)
  printf("YES");
  else
  printf("NO");

  return 0;
}
