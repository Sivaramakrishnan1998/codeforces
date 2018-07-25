#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int size,key,mid;
  cin>>size>>key;
  mid = (size%2==0)?size/2:(size/2)+1;

  if(key<=mid)
  {
    cout<<(key*2)-1;
  }
  else
  {
    mid = key - mid;
    cout<<mid*2;
  }
  return 0;
}
