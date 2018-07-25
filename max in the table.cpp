#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int func(int i,int j){
  if(i==1||j==1) return 1;
  else{
    return (func(i-1,j)+func(i,j-1));
  }
  return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    int n,start,end,len,iptr,jptr,i,j,num,mul;
    cin>>n;
    cout<<func(n,n);
    return 0;
}
