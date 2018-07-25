#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    int ans=0,start,end,len,iptr,jptr,i,j;
    int num;cin>>num;int ho[num],gu[num];
    for(i=0;i<num;i++){
      cin>>ho[i]>>gu[i];
      for(j=0;j<i;j++){
        ans += (ho[i]==gu[j])+(ho[j]==gu[i]);
      }
    }
    cout<<ans;
    return 0;
}
