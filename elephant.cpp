#include<bits/stdc++.h>
using namespace std;
#include<string>

int main(){
  int num,count=0,rem,temp;
  cin>>num;
  count += num/5;
  rem = num%5;

  if(rem>0&&(rem%2==0||rem%4==0||rem%1==0||rem%3==0)) count++;

  cout<<count;

  return 0;
}
