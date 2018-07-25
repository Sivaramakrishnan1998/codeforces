#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int value,money,number,borrow,total;
  cin>>value>>money>>number;
  total = value*((number*number + number)/2);
  borrow = (total>money)?total - money:0;
  cout<<borrow;
  return 0;
}
