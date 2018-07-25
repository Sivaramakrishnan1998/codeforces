#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input,str,t;
    int start,end,len,iptr,jptr,i,j,count=0,flag=1;
    int lim;
    cin>>lim;
    while(lim--){
      cin>>t;
      str+=t;
    }

    for(i=0;i<str.size()-1;i++){
      if((str[i]=='0'&&str[i+1]=='0')||(str[i]=='1'&&str[i+1]=='1')){
        count++;
      }
    }
    cout<<count+ flag;

    return 0;
}
