#include<bits/stdc++.h>
using namespace std;
int main()
{
  int size;
  cin>>size;
  int arr[size+1]={0},t,i;
  for(i=1;i<=size;i++){
    cin>>t;
    arr[t] = i;
  }
  for(i=1;i<=size;i++)
  printf("%d ",arr[i]);

  return 0;
}
