#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string num1,num2;
    cin>>num1;
    cin>>num2;

    int start,end,len,iptr,jptr,i,j,one,two;
    len = num1.size();
    for(i=0;i<len;i++)
    {
      one = num1[i]-'0',two = num2[i]-'0';
      int ans = one^two;
      cout<<ans;
    }
    return 0;
}
