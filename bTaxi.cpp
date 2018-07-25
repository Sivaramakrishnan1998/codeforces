#include<bits/stdc++.h>
using namespace std;
int main()
{
  int size,i,ind,sum=0,rem=0,t;
  int Taxi[5]={0};

  for(scanf("%d",&size);size--;)
  {
    scanf("%d",&t);
    Taxi[t]++;
  }

  int rem1=0,three,two,threeAndOne = (Taxi[3]*3)+Taxi[1];

if(threeAndOne>4){
  rem = (threeAndOne%4)!=0?1:0;three = threeAndOne/4 + rem;
}
else{
  if(threeAndOne>0)
three=1;
}


if(Taxi[2]*2>4)
{
  rem1 = (Taxi[2]%4)!=0?1:0;
  two = (Taxi[2]*2)/4 + rem1;

}
else{
  if(Taxi[2]*2>0)
two = 1;


  cout<< Taxi[4] + three + two;

// cout<<three<<two;

  return 0;
}
