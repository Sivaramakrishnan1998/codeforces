#include<bits/stdc++.h>
using namespace std;
int main()
{
  char str[101];
  cin>>str;
  int i,len = strlen(str);
  for(i=0;i<len;i++)
  {
    if((str[i]=='H'||str[i]=='Q'||str[i]=='9')&&(str[i]>31&&str[i]<123))
    {
      cout<<"YES";
      exit(0);
    }
  }
  cout<<"NO";
  return 0;
}
