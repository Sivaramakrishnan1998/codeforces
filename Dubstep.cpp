#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string ans;
    char str[201],ch;
    cin>>str;
    int start,end,len,iptr,jptr,i,j,count;
    len = strlen(str);

    for(i=0;i<len;)
    {
      if(i+2<len)
      {
        if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B')
        {
          i+=3;
          if(count==0&&i!=0){
          cout<<" ";
          count=1;
        }
        }
        else{
          count = 0;
          cout<<str[i];
          i++;
        }
      }
      else
      {
        cout<<str[i];
        i++;
      }
    }


    return 0;
}
