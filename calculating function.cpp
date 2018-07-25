#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int inp,value,odd,even;
  cin>>inp;
  odd = (inp%2==0)?inp/2:(inp/2)+1;
  even = inp-odd;
  value = -(odd*odd)+(even*even)+ even;
  cout<<value;

  return 0;
}
