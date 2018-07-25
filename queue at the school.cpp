#include<bits/stdc++.h>

using namespace std;

int main()
{
  int size,move,i=0,j;
  cin>>size>>move;
  char str[51],ch;
  cin>>str;
while(move--)
{
  for(i=0;str[i];)
  {
    if(str[i]=='B'&&str[i+1]=='G')
    {
      str[i+1] = 'B',str[i] = 'G';
      i+=2;
    }
    else
    {
      i++;
    }

  }
}

cout<<str;
return 0;
}
