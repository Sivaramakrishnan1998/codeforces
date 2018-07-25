#include<bits/stdc++.h>
using namespace std;
int main()
{
  int row,col,flag=0,count=0;
  cin>>row>>col;
  if(row%2!=0&&col%2!=0&&row==col) cout<<"Akshat";
  else if(row==1||col==1) cout<<"Akshat";
  else if(row%2==0&&col%2==0&&row==col) cout<<"Malvika";
  else
  {
    while(row!=0&&col!=0)
    {
      count++;
      row--,col--;
      flag =(count%2!=0)?1:0;
    }
    (flag==1)?cout<<"Akshat":cout<<"Malvika";
  }
  return 0;
}
