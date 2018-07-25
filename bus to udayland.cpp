#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    int start,end,len,iptr,jptr,i,j,flag = 0;
    string str[1001];
    int n;cin>>n;
    for(i=0;i<n;i++){
      cin>>str[i];
      string x = str[i];
      if(x[0]=='O'&&x[1]=='O'&&flag==0){
        x[0] = '+';x[1] = '+';flag=1;
      }
        if(x[3]=='O'&&x[4]=='O'&&flag==0) {
          x[3] = '+';x[4] = '+';flag =1;
        }
        str[i] = x;
    }
    if(flag==0)cout<<"NO";
    else{
      cout<<"YES"<<'\n';
      for(i=0;i<n;i++) {
        cout<<str[i]<<'\n';
      }
    }
    return 0;
}
